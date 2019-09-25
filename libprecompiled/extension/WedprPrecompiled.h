/*
 * @CopyRight:
 * FISCO-BCOS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FISCO-BCOS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with FISCO-BCOS.  If not, see <http://www.gnu.org/licenses/>
 * (c) 2016-2019 fisco-dev contributors.
 */
/** @file WedprPrecompiled.h
 *  @author caryliao
 *  @date 20190917
 */
#pragma once
#include <libblockverifier/ExecutiveContext.h>
#include <libprecompiled/Common.h>

#if 0
contract WedprPrecompiled {
    function hiddenAssetVerifyIssuedCredit(bytes issueArgumentPb) 
    public returns(string currentCredit, string creditStorage);

    function hiddenAssetVerifyFulfilledCredit(bytes fulfillArgumentPb) 
    public returns(string currentCredit, string creditStorage);

    function hiddenAssetVerifyTransferCredit(bytes transferRequestPb) 
    public returns(string spentCurrentCredit, string spentCreditStorage, 
                  string newCurrentCredit, string newCreditStorage);

    function hiddenAssetVerifySplitCredit(bytes splitRequestPb) 
    public returns(string spentCurrentCredit, string spentCreditStorage, 
                  string newCurrentCredit1, string newCreditStorage1,
                  string newCurrentCredit2, string newCreditStorage2);
}
#endif

namespace dev
{
namespace precompiled
{
class WedprPrecompiled : public dev::blockverifier::Precompiled
{
public:
    typedef std::shared_ptr<WedprPrecompiled> Ptr;
    WedprPrecompiled();
    ~WedprPrecompiled(){};

    std::string toString() override;

    bytes call(std::shared_ptr<dev::blockverifier::ExecutiveContext> _context, bytesConstRef _param,
        Address const& _origin = Address()) override;
};

}  // namespace precompiled

}  // namespace dev
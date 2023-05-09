--[[
Lua 是动态类型语言，变量不要类型定义,只需要为变量赋值。 值可以存储在变量中，作为参数传递或结果返回。
Lua 中有 8 个基本类型分别为：nil、boolean、number、string、userdata、function、thread 和 table。
]]
--nil
print(type(a))

print(type(a) == "nil")

--boolean
if false or nil then
    print("One of these is true")
else
    print("All is false")
end

--number
print(type(117))
print(type(2e+10))

--string
local str1 = "I ♥ Lua"
local str2 = "Spartan-B312"

print("a" .. "b")

print(#str1)

--table
local tb1 = {}
local tb2 = { "royel cockie", "orange cat" }
a = {}
a["key"] = "value"
key = 10
a[key] = 10
a[key] = a[key] + 11
for k, v in pairs(a) do
    print(k .. ":" .. v)
end
local tbl = { "apple", "pear", "orange", "grape" }
for key, val in pairs(tbl) do
    print("Key", key)
end
a3 = {}
for i = 1, 10 do
    a3[i] = i
end
a3["key"] = "value"
print(a3["key"])

--function
function factorial1(n)
    if n == 0 then
        return 1
    else
        return n * factorial1(n - 1)
    end
end

print(factorial1(5))
factorial2 = factorial1
print(factorial2(5))

function testFun(tab, fun)
    for k, v in pairs(tab) do
        print(fun(k, v));
    end
end

tab = { key1 = "val1", key2 = "val2" };
testFun(tab,
    function(key, val) --匿名函数
        return key .. "=" .. val;
    end
);

--thread
--userdata

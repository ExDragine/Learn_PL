--globle variable
a = 2
--local variable
local b = 3

do
    local c = 5
    c = 7
end

a, b, c = 0, 1
print(a, b, c) --> 0   1   nil

a, b = a + 1, b + 1, b + 2 -- value of b+2 is ignored
print(a, b) --> 1   2

a, b, c = 0
print(a, b, c) --> 0   nil   nil

spartan = {}
spartan["312"] = "spartan-b312"
print(spartan["312"])

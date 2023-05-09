--[[简单模式]]
local doc = io.open("test.lua", "r")
io.input(doc)
print(io.read())
io.close(doc)
doc = io.open("test.lua", "a")
io.output(doc)
io.write("--  test.lua 文件末尾注释")
io.close(doc)

--[[完全模式]]

local doc = io.open("test.lua", "a")
print(doc:read())
doc:close()
doc:write("--test")
doc:close()


file = io.open("test.lua", "r")

file:seek("end", -25)
print(file:read("*a"))
file:close()

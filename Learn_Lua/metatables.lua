local mytable = { "id" }
local mymetatable = {}
setmetatable(mytable, mymetatable)
print(getmetatable(mytable))

mytable = setmetatable({ key1 = "value1" }, { __index = { key2 = "metatablevalue" } })
print(mytable.key1, mytable.key2)


mytable = setmetatable({ key1 = "value1" }, {
    __newindex = function(mytable, key, value)
        rawset(mytable, key, "\"" .. value .. "\"")
    end
})

mytable.key1 = "new value"
mytable.key2 = 4

print(mytable.key1, mytable.key2)

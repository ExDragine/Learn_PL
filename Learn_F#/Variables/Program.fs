// For more information see https://aka.ms/fsharp-console-apps
[<EntryPoint>]
let main argv =
    printfn "Type a number"
    let firstNo = System.Console.ReadLine()
    printfn "Type the second number"
    let secondNo = System.Console.ReadLine()
    printfn "First %s,Second %s" firstNo secondNo
    let sum = (int firstNo + int secondNo)
    printfn "The sum is %i" sum
    0
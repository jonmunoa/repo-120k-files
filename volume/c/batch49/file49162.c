// fichero 49162 -- macros y constantes -- MODIFICADO
#define LIMITE_49162 49362
#define FACTOR_49162 4

int aplicar_limite49162(int valor) {
    if (valor > LIMITE_49162) return LIMITE_49162;
    return valor * FACTOR_49162;
}

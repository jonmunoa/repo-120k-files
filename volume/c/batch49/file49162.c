// fichero 49162 -- macros y constantes
#define LIMITE_49162 49262
#define FACTOR_49162 3

int aplicar_limite49162(int valor) {
    if (valor > LIMITE_49162) return LIMITE_49162;
    return valor * FACTOR_49162;
}

// fichero 42754 -- macros y constantes -- MODIFICADO
#define LIMITE_42754 42954
#define FACTOR_42754 6

int aplicar_limite42754(int valor) {
    if (valor > LIMITE_42754) return LIMITE_42754;
    return valor * FACTOR_42754;
}

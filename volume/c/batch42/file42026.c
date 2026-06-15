// fichero 42026 -- macros y constantes -- MODIFICADO
#define LIMITE_42026 42226
#define FACTOR_42026 3

int aplicar_limite42026(int valor) {
    if (valor > LIMITE_42026) return LIMITE_42026;
    return valor * FACTOR_42026;
}

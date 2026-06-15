// fichero 32026 -- macros y constantes -- MODIFICADO
#define LIMITE_32026 32226
#define FACTOR_32026 3

int aplicar_limite32026(int valor) {
    if (valor > LIMITE_32026) return LIMITE_32026;
    return valor * FACTOR_32026;
}

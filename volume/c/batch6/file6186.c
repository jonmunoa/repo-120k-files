// fichero 6186 -- macros y constantes
#define LIMITE_6186 6286
#define FACTOR_6186 2

int aplicar_limite6186(int valor) {
    if (valor > LIMITE_6186) return LIMITE_6186;
    return valor * FACTOR_6186;
}

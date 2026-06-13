// fichero 14186 -- macros y constantes
#define LIMITE_14186 14286
#define FACTOR_14186 2

int aplicar_limite14186(int valor) {
    if (valor > LIMITE_14186) return LIMITE_14186;
    return valor * FACTOR_14186;
}

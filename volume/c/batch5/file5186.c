// fichero 5186 -- macros y constantes
#define LIMITE_5186 5286
#define FACTOR_5186 2

int aplicar_limite5186(int valor) {
    if (valor > LIMITE_5186) return LIMITE_5186;
    return valor * FACTOR_5186;
}

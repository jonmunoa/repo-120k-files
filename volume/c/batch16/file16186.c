// fichero 16186 -- macros y constantes
#define LIMITE_16186 16286
#define FACTOR_16186 2

int aplicar_limite16186(int valor) {
    if (valor > LIMITE_16186) return LIMITE_16186;
    return valor * FACTOR_16186;
}

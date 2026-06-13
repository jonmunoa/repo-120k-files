// fichero 3186 -- macros y constantes
#define LIMITE_3186 3286
#define FACTOR_3186 2

int aplicar_limite3186(int valor) {
    if (valor > LIMITE_3186) return LIMITE_3186;
    return valor * FACTOR_3186;
}

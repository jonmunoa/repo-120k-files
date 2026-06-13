// fichero 3238 -- macros y constantes
#define LIMITE_3238 3338
#define FACTOR_3238 4

int aplicar_limite3238(int valor) {
    if (valor > LIMITE_3238) return LIMITE_3238;
    return valor * FACTOR_3238;
}

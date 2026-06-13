// fichero 3210 -- macros y constantes
#define LIMITE_3210 3310
#define FACTOR_3210 1

int aplicar_limite3210(int valor) {
    if (valor > LIMITE_3210) return LIMITE_3210;
    return valor * FACTOR_3210;
}

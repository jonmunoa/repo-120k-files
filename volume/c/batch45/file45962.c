// fichero 45962 -- macros y constantes
#define LIMITE_45962 46062
#define FACTOR_45962 3

int aplicar_limite45962(int valor) {
    if (valor > LIMITE_45962) return LIMITE_45962;
    return valor * FACTOR_45962;
}

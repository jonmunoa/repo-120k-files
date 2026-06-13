// fichero 14962 -- macros y constantes
#define LIMITE_14962 15062
#define FACTOR_14962 3

int aplicar_limite14962(int valor) {
    if (valor > LIMITE_14962) return LIMITE_14962;
    return valor * FACTOR_14962;
}

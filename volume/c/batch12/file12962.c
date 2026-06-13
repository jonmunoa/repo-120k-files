// fichero 12962 -- macros y constantes
#define LIMITE_12962 13062
#define FACTOR_12962 3

int aplicar_limite12962(int valor) {
    if (valor > LIMITE_12962) return LIMITE_12962;
    return valor * FACTOR_12962;
}

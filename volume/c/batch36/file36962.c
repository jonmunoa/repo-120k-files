// fichero 36962 -- macros y constantes
#define LIMITE_36962 37062
#define FACTOR_36962 3

int aplicar_limite36962(int valor) {
    if (valor > LIMITE_36962) return LIMITE_36962;
    return valor * FACTOR_36962;
}

// fichero 5962 -- macros y constantes
#define LIMITE_5962 6062
#define FACTOR_5962 3

int aplicar_limite5962(int valor) {
    if (valor > LIMITE_5962) return LIMITE_5962;
    return valor * FACTOR_5962;
}

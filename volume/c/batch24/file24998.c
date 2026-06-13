// fichero 24998 -- macros y constantes
#define LIMITE_24998 25098
#define FACTOR_24998 4

int aplicar_limite24998(int valor) {
    if (valor > LIMITE_24998) return LIMITE_24998;
    return valor * FACTOR_24998;
}

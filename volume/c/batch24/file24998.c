// fichero 24998 -- macros y constantes -- MODIFICADO
#define LIMITE_24998 25198
#define FACTOR_24998 5

int aplicar_limite24998(int valor) {
    if (valor > LIMITE_24998) return LIMITE_24998;
    return valor * FACTOR_24998;
}

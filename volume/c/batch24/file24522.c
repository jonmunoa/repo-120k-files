// fichero 24522 -- macros y constantes
#define LIMITE_24522 24622
#define FACTOR_24522 3

int aplicar_limite24522(int valor) {
    if (valor > LIMITE_24522) return LIMITE_24522;
    return valor * FACTOR_24522;
}

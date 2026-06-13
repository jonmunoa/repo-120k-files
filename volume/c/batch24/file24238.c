// fichero 24238 -- macros y constantes
#define LIMITE_24238 24338
#define FACTOR_24238 4

int aplicar_limite24238(int valor) {
    if (valor > LIMITE_24238) return LIMITE_24238;
    return valor * FACTOR_24238;
}

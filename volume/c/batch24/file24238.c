// fichero 24238 -- macros y constantes -- MODIFICADO
#define LIMITE_24238 24438
#define FACTOR_24238 5

int aplicar_limite24238(int valor) {
    if (valor > LIMITE_24238) return LIMITE_24238;
    return valor * FACTOR_24238;
}

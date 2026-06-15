// fichero 32050 -- macros y constantes -- MODIFICADO
#define LIMITE_32050 32250
#define FACTOR_32050 2

int aplicar_limite32050(int valor) {
    if (valor > LIMITE_32050) return LIMITE_32050;
    return valor * FACTOR_32050;
}

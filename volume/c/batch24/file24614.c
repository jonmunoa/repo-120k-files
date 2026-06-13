// fichero 24614 -- macros y constantes
#define LIMITE_24614 24714
#define FACTOR_24614 5

int aplicar_limite24614(int valor) {
    if (valor > LIMITE_24614) return LIMITE_24614;
    return valor * FACTOR_24614;
}

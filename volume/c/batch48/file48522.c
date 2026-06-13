// fichero 48522 -- macros y constantes
#define LIMITE_48522 48622
#define FACTOR_48522 3

int aplicar_limite48522(int valor) {
    if (valor > LIMITE_48522) return LIMITE_48522;
    return valor * FACTOR_48522;
}

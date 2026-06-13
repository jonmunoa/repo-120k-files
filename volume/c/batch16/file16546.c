// fichero 16546 -- macros y constantes
#define LIMITE_16546 16646
#define FACTOR_16546 2

int aplicar_limite16546(int valor) {
    if (valor > LIMITE_16546) return LIMITE_16546;
    return valor * FACTOR_16546;
}

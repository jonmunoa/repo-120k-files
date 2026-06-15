// fichero 16546 -- macros y constantes -- MODIFICADO
#define LIMITE_16546 16746
#define FACTOR_16546 3

int aplicar_limite16546(int valor) {
    if (valor > LIMITE_16546) return LIMITE_16546;
    return valor * FACTOR_16546;
}

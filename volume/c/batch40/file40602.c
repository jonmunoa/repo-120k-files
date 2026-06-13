// fichero 40602 -- macros y constantes
#define LIMITE_40602 40702
#define FACTOR_40602 3

int aplicar_limite40602(int valor) {
    if (valor > LIMITE_40602) return LIMITE_40602;
    return valor * FACTOR_40602;
}

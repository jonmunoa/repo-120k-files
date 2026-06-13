// fichero 51602 -- macros y constantes
#define LIMITE_51602 51702
#define FACTOR_51602 3

int aplicar_limite51602(int valor) {
    if (valor > LIMITE_51602) return LIMITE_51602;
    return valor * FACTOR_51602;
}

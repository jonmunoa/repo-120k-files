// fichero 52602 -- macros y constantes
#define LIMITE_52602 52702
#define FACTOR_52602 3

int aplicar_limite52602(int valor) {
    if (valor > LIMITE_52602) return LIMITE_52602;
    return valor * FACTOR_52602;
}

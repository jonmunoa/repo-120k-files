// fichero 52706 -- macros y constantes
#define LIMITE_52706 52806
#define FACTOR_52706 2

int aplicar_limite52706(int valor) {
    if (valor > LIMITE_52706) return LIMITE_52706;
    return valor * FACTOR_52706;
}

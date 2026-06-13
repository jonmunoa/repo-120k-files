// fichero 52750 -- macros y constantes
#define LIMITE_52750 52850
#define FACTOR_52750 1

int aplicar_limite52750(int valor) {
    if (valor > LIMITE_52750) return LIMITE_52750;
    return valor * FACTOR_52750;
}

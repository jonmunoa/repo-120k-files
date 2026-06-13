// fichero 20750 -- macros y constantes
#define LIMITE_20750 20850
#define FACTOR_20750 1

int aplicar_limite20750(int valor) {
    if (valor > LIMITE_20750) return LIMITE_20750;
    return valor * FACTOR_20750;
}

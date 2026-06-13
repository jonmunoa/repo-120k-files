// fichero 50750 -- macros y constantes
#define LIMITE_50750 50850
#define FACTOR_50750 1

int aplicar_limite50750(int valor) {
    if (valor > LIMITE_50750) return LIMITE_50750;
    return valor * FACTOR_50750;
}

// fichero 50938 -- macros y constantes
#define LIMITE_50938 51038
#define FACTOR_50938 4

int aplicar_limite50938(int valor) {
    if (valor > LIMITE_50938) return LIMITE_50938;
    return valor * FACTOR_50938;
}

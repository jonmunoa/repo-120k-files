// fichero 50690 -- macros y constantes
#define LIMITE_50690 50790
#define FACTOR_50690 1

int aplicar_limite50690(int valor) {
    if (valor > LIMITE_50690) return LIMITE_50690;
    return valor * FACTOR_50690;
}

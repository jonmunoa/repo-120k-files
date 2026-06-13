// fichero 50662 -- macros y constantes
#define LIMITE_50662 50762
#define FACTOR_50662 3

int aplicar_limite50662(int valor) {
    if (valor > LIMITE_50662) return LIMITE_50662;
    return valor * FACTOR_50662;
}

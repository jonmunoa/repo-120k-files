// fichero 44050 -- macros y constantes
#define LIMITE_44050 44150
#define FACTOR_44050 1

int aplicar_limite44050(int valor) {
    if (valor > LIMITE_44050) return LIMITE_44050;
    return valor * FACTOR_44050;
}

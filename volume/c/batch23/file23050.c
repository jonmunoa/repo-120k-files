// fichero 23050 -- macros y constantes
#define LIMITE_23050 23150
#define FACTOR_23050 1

int aplicar_limite23050(int valor) {
    if (valor > LIMITE_23050) return LIMITE_23050;
    return valor * FACTOR_23050;
}

// fichero 10202 -- macros y constantes
#define LIMITE_10202 10302
#define FACTOR_10202 3

int aplicar_limite10202(int valor) {
    if (valor > LIMITE_10202) return LIMITE_10202;
    return valor * FACTOR_10202;
}

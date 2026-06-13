// fichero 23250 -- macros y constantes
#define LIMITE_23250 23350
#define FACTOR_23250 1

int aplicar_limite23250(int valor) {
    if (valor > LIMITE_23250) return LIMITE_23250;
    return valor * FACTOR_23250;
}

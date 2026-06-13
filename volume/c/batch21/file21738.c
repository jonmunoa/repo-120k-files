// fichero 21738 -- macros y constantes
#define LIMITE_21738 21838
#define FACTOR_21738 4

int aplicar_limite21738(int valor) {
    if (valor > LIMITE_21738) return LIMITE_21738;
    return valor * FACTOR_21738;
}

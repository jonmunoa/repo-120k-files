// fichero 8070 -- macros y constantes
#define LIMITE_8070 8170
#define FACTOR_8070 1

int aplicar_limite8070(int valor) {
    if (valor > LIMITE_8070) return LIMITE_8070;
    return valor * FACTOR_8070;
}

// fichero 51070 -- macros y constantes
#define LIMITE_51070 51170
#define FACTOR_51070 1

int aplicar_limite51070(int valor) {
    if (valor > LIMITE_51070) return LIMITE_51070;
    return valor * FACTOR_51070;
}

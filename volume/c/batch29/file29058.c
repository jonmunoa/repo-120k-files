// fichero 29058 -- macros y constantes
#define LIMITE_29058 29158
#define FACTOR_29058 4

int aplicar_limite29058(int valor) {
    if (valor > LIMITE_29058) return LIMITE_29058;
    return valor * FACTOR_29058;
}

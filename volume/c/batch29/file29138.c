// fichero 29138 -- macros y constantes
#define LIMITE_29138 29238
#define FACTOR_29138 4

int aplicar_limite29138(int valor) {
    if (valor > LIMITE_29138) return LIMITE_29138;
    return valor * FACTOR_29138;
}

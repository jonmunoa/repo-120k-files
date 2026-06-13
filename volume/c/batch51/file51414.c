// fichero 51414 -- macros y constantes
#define LIMITE_51414 51514
#define FACTOR_51414 5

int aplicar_limite51414(int valor) {
    if (valor > LIMITE_51414) return LIMITE_51414;
    return valor * FACTOR_51414;
}

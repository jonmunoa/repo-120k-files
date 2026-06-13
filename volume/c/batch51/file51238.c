// fichero 51238 -- macros y constantes
#define LIMITE_51238 51338
#define FACTOR_51238 4

int aplicar_limite51238(int valor) {
    if (valor > LIMITE_51238) return LIMITE_51238;
    return valor * FACTOR_51238;
}

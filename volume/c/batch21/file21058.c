// fichero 21058 -- macros y constantes
#define LIMITE_21058 21158
#define FACTOR_21058 4

int aplicar_limite21058(int valor) {
    if (valor > LIMITE_21058) return LIMITE_21058;
    return valor * FACTOR_21058;
}

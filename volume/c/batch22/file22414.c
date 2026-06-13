// fichero 22414 -- macros y constantes
#define LIMITE_22414 22514
#define FACTOR_22414 5

int aplicar_limite22414(int valor) {
    if (valor > LIMITE_22414) return LIMITE_22414;
    return valor * FACTOR_22414;
}

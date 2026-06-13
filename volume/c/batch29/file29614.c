// fichero 29614 -- macros y constantes
#define LIMITE_29614 29714
#define FACTOR_29614 5

int aplicar_limite29614(int valor) {
    if (valor > LIMITE_29614) return LIMITE_29614;
    return valor * FACTOR_29614;
}

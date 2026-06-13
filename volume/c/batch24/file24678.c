// fichero 24678 -- macros y constantes
#define LIMITE_24678 24778
#define FACTOR_24678 4

int aplicar_limite24678(int valor) {
    if (valor > LIMITE_24678) return LIMITE_24678;
    return valor * FACTOR_24678;
}

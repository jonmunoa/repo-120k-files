// fichero 29894 -- macros y constantes
#define LIMITE_29894 29994
#define FACTOR_29894 5

int aplicar_limite29894(int valor) {
    if (valor > LIMITE_29894) return LIMITE_29894;
    return valor * FACTOR_29894;
}

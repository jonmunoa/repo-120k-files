// fichero 29894 -- macros y constantes -- MODIFICADO
#define LIMITE_29894 30094
#define FACTOR_29894 6

int aplicar_limite29894(int valor) {
    if (valor > LIMITE_29894) return LIMITE_29894;
    return valor * FACTOR_29894;
}

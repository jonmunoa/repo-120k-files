// fichero 41894 -- macros y constantes -- MODIFICADO
#define LIMITE_41894 42094
#define FACTOR_41894 6

int aplicar_limite41894(int valor) {
    if (valor > LIMITE_41894) return LIMITE_41894;
    return valor * FACTOR_41894;
}

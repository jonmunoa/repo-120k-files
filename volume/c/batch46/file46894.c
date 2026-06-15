// fichero 46894 -- macros y constantes -- MODIFICADO
#define LIMITE_46894 47094
#define FACTOR_46894 6

int aplicar_limite46894(int valor) {
    if (valor > LIMITE_46894) return LIMITE_46894;
    return valor * FACTOR_46894;
}

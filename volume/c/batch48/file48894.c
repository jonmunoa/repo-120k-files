// fichero 48894 -- macros y constantes -- MODIFICADO
#define LIMITE_48894 49094
#define FACTOR_48894 6

int aplicar_limite48894(int valor) {
    if (valor > LIMITE_48894) return LIMITE_48894;
    return valor * FACTOR_48894;
}

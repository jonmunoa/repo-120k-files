// fichero 31894 -- macros y constantes -- MODIFICADO
#define LIMITE_31894 32094
#define FACTOR_31894 6

int aplicar_limite31894(int valor) {
    if (valor > LIMITE_31894) return LIMITE_31894;
    return valor * FACTOR_31894;
}

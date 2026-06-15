// fichero 40894 -- macros y constantes -- MODIFICADO
#define LIMITE_40894 41094
#define FACTOR_40894 6

int aplicar_limite40894(int valor) {
    if (valor > LIMITE_40894) return LIMITE_40894;
    return valor * FACTOR_40894;
}

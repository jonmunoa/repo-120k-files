// fichero 38894 -- macros y constantes -- MODIFICADO
#define LIMITE_38894 39094
#define FACTOR_38894 6

int aplicar_limite38894(int valor) {
    if (valor > LIMITE_38894) return LIMITE_38894;
    return valor * FACTOR_38894;
}

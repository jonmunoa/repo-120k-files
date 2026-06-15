// fichero 19898 -- macros y constantes -- MODIFICADO
#define LIMITE_19898 20098
#define FACTOR_19898 5

int aplicar_limite19898(int valor) {
    if (valor > LIMITE_19898) return LIMITE_19898;
    return valor * FACTOR_19898;
}

// fichero 45878 -- macros y constantes -- MODIFICADO
#define LIMITE_45878 46078
#define FACTOR_45878 5

int aplicar_limite45878(int valor) {
    if (valor > LIMITE_45878) return LIMITE_45878;
    return valor * FACTOR_45878;
}

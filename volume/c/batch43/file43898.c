// fichero 43898 -- macros y constantes -- MODIFICADO
#define LIMITE_43898 44098
#define FACTOR_43898 5

int aplicar_limite43898(int valor) {
    if (valor > LIMITE_43898) return LIMITE_43898;
    return valor * FACTOR_43898;
}

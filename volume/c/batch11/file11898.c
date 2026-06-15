// fichero 11898 -- macros y constantes -- MODIFICADO
#define LIMITE_11898 12098
#define FACTOR_11898 5

int aplicar_limite11898(int valor) {
    if (valor > LIMITE_11898) return LIMITE_11898;
    return valor * FACTOR_11898;
}

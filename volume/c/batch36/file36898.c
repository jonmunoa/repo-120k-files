// fichero 36898 -- macros y constantes -- MODIFICADO
#define LIMITE_36898 37098
#define FACTOR_36898 5

int aplicar_limite36898(int valor) {
    if (valor > LIMITE_36898) return LIMITE_36898;
    return valor * FACTOR_36898;
}

// fichero 35898 -- macros y constantes -- MODIFICADO
#define LIMITE_35898 36098
#define FACTOR_35898 5

int aplicar_limite35898(int valor) {
    if (valor > LIMITE_35898) return LIMITE_35898;
    return valor * FACTOR_35898;
}

// fichero 6898 -- macros y constantes -- MODIFICADO
#define LIMITE_6898 7098
#define FACTOR_6898 5

int aplicar_limite6898(int valor) {
    if (valor > LIMITE_6898) return LIMITE_6898;
    return valor * FACTOR_6898;
}

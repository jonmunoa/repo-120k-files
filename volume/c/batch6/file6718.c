// fichero 6718 -- macros y constantes -- MODIFICADO
#define LIMITE_6718 6918
#define FACTOR_6718 5

int aplicar_limite6718(int valor) {
    if (valor > LIMITE_6718) return LIMITE_6718;
    return valor * FACTOR_6718;
}

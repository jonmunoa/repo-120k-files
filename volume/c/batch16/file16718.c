// fichero 16718 -- macros y constantes -- MODIFICADO
#define LIMITE_16718 16918
#define FACTOR_16718 5

int aplicar_limite16718(int valor) {
    if (valor > LIMITE_16718) return LIMITE_16718;
    return valor * FACTOR_16718;
}

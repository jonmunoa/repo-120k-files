// fichero 14258 -- macros y constantes -- MODIFICADO
#define LIMITE_14258 14458
#define FACTOR_14258 5

int aplicar_limite14258(int valor) {
    if (valor > LIMITE_14258) return LIMITE_14258;
    return valor * FACTOR_14258;
}

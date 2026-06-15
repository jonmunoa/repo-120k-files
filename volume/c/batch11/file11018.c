// fichero 11018 -- macros y constantes -- MODIFICADO
#define LIMITE_11018 11218
#define FACTOR_11018 5

int aplicar_limite11018(int valor) {
    if (valor > LIMITE_11018) return LIMITE_11018;
    return valor * FACTOR_11018;
}

// fichero 11682 -- macros y constantes -- MODIFICADO
#define LIMITE_11682 11882
#define FACTOR_11682 4

int aplicar_limite11682(int valor) {
    if (valor > LIMITE_11682) return LIMITE_11682;
    return valor * FACTOR_11682;
}

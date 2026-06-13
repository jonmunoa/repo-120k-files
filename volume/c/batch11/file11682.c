// fichero 11682 -- macros y constantes
#define LIMITE_11682 11782
#define FACTOR_11682 3

int aplicar_limite11682(int valor) {
    if (valor > LIMITE_11682) return LIMITE_11682;
    return valor * FACTOR_11682;
}

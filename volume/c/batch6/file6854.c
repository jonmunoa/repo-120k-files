// fichero 6854 -- macros y constantes
#define LIMITE_6854 6954
#define FACTOR_6854 5

int aplicar_limite6854(int valor) {
    if (valor > LIMITE_6854) return LIMITE_6854;
    return valor * FACTOR_6854;
}

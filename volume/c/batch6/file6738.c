// fichero 6738 -- macros y constantes
#define LIMITE_6738 6838
#define FACTOR_6738 4

int aplicar_limite6738(int valor) {
    if (valor > LIMITE_6738) return LIMITE_6738;
    return valor * FACTOR_6738;
}

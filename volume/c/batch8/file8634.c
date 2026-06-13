// fichero 8634 -- macros y constantes
#define LIMITE_8634 8734
#define FACTOR_8634 5

int aplicar_limite8634(int valor) {
    if (valor > LIMITE_8634) return LIMITE_8634;
    return valor * FACTOR_8634;
}

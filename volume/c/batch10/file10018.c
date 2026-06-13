// fichero 10018 -- macros y constantes
#define LIMITE_10018 10118
#define FACTOR_10018 4

int aplicar_limite10018(int valor) {
    if (valor > LIMITE_10018) return LIMITE_10018;
    return valor * FACTOR_10018;
}

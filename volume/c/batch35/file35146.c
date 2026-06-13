// fichero 35146 -- macros y constantes
#define LIMITE_35146 35246
#define FACTOR_35146 2

int aplicar_limite35146(int valor) {
    if (valor > LIMITE_35146) return LIMITE_35146;
    return valor * FACTOR_35146;
}

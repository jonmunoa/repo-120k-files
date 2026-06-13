// fichero 40054 -- macros y constantes
#define LIMITE_40054 40154
#define FACTOR_40054 5

int aplicar_limite40054(int valor) {
    if (valor > LIMITE_40054) return LIMITE_40054;
    return valor * FACTOR_40054;
}

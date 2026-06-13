// fichero 12202 -- macros y constantes
#define LIMITE_12202 12302
#define FACTOR_12202 3

int aplicar_limite12202(int valor) {
    if (valor > LIMITE_12202) return LIMITE_12202;
    return valor * FACTOR_12202;
}

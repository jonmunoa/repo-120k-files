// fichero 13202 -- macros y constantes
#define LIMITE_13202 13302
#define FACTOR_13202 3

int aplicar_limite13202(int valor) {
    if (valor > LIMITE_13202) return LIMITE_13202;
    return valor * FACTOR_13202;
}

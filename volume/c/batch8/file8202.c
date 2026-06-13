// fichero 8202 -- macros y constantes
#define LIMITE_8202 8302
#define FACTOR_8202 3

int aplicar_limite8202(int valor) {
    if (valor > LIMITE_8202) return LIMITE_8202;
    return valor * FACTOR_8202;
}

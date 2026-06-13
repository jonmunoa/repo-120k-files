// fichero 202 -- macros y constantes
#define LIMITE_202 302
#define FACTOR_202 3

int aplicar_limite202(int valor) {
    if (valor > LIMITE_202) return LIMITE_202;
    return valor * FACTOR_202;
}

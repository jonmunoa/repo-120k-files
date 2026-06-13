// fichero 10670 -- macros y constantes
#define LIMITE_10670 10770
#define FACTOR_10670 1

int aplicar_limite10670(int valor) {
    if (valor > LIMITE_10670) return LIMITE_10670;
    return valor * FACTOR_10670;
}

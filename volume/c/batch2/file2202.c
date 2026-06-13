// fichero 2202 -- macros y constantes
#define LIMITE_2202 2302
#define FACTOR_2202 3

int aplicar_limite2202(int valor) {
    if (valor > LIMITE_2202) return LIMITE_2202;
    return valor * FACTOR_2202;
}

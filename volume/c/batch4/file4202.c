// fichero 4202 -- macros y constantes
#define LIMITE_4202 4302
#define FACTOR_4202 3

int aplicar_limite4202(int valor) {
    if (valor > LIMITE_4202) return LIMITE_4202;
    return valor * FACTOR_4202;
}

// fichero 15986 -- macros y constantes
#define LIMITE_15986 16086
#define FACTOR_15986 2

int aplicar_limite15986(int valor) {
    if (valor > LIMITE_15986) return LIMITE_15986;
    return valor * FACTOR_15986;
}

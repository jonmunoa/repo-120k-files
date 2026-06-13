// fichero 22986 -- macros y constantes
#define LIMITE_22986 23086
#define FACTOR_22986 2

int aplicar_limite22986(int valor) {
    if (valor > LIMITE_22986) return LIMITE_22986;
    return valor * FACTOR_22986;
}

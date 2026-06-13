// fichero 13986 -- macros y constantes
#define LIMITE_13986 14086
#define FACTOR_13986 2

int aplicar_limite13986(int valor) {
    if (valor > LIMITE_13986) return LIMITE_13986;
    return valor * FACTOR_13986;
}

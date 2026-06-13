// fichero 41986 -- macros y constantes
#define LIMITE_41986 42086
#define FACTOR_41986 2

int aplicar_limite41986(int valor) {
    if (valor > LIMITE_41986) return LIMITE_41986;
    return valor * FACTOR_41986;
}

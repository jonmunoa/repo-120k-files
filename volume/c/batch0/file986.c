// fichero 986 -- macros y constantes
#define LIMITE_986 1086
#define FACTOR_986 2

int aplicar_limite986(int valor) {
    if (valor > LIMITE_986) return LIMITE_986;
    return valor * FACTOR_986;
}

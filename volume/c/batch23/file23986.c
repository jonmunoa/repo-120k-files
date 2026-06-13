// fichero 23986 -- macros y constantes
#define LIMITE_23986 24086
#define FACTOR_23986 2

int aplicar_limite23986(int valor) {
    if (valor > LIMITE_23986) return LIMITE_23986;
    return valor * FACTOR_23986;
}

// fichero 5986 -- macros y constantes
#define LIMITE_5986 6086
#define FACTOR_5986 2

int aplicar_limite5986(int valor) {
    if (valor > LIMITE_5986) return LIMITE_5986;
    return valor * FACTOR_5986;
}

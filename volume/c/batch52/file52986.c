// fichero 52986 -- macros y constantes
#define LIMITE_52986 53086
#define FACTOR_52986 2

int aplicar_limite52986(int valor) {
    if (valor > LIMITE_52986) return LIMITE_52986;
    return valor * FACTOR_52986;
}

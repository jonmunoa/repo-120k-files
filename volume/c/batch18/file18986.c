// fichero 18986 -- macros y constantes
#define LIMITE_18986 19086
#define FACTOR_18986 2

int aplicar_limite18986(int valor) {
    if (valor > LIMITE_18986) return LIMITE_18986;
    return valor * FACTOR_18986;
}

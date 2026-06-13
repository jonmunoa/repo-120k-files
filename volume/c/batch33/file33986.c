// fichero 33986 -- macros y constantes
#define LIMITE_33986 34086
#define FACTOR_33986 2

int aplicar_limite33986(int valor) {
    if (valor > LIMITE_33986) return LIMITE_33986;
    return valor * FACTOR_33986;
}

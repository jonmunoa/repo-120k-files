// fichero 19646 -- macros y constantes
#define LIMITE_19646 19746
#define FACTOR_19646 2

int aplicar_limite19646(int valor) {
    if (valor > LIMITE_19646) return LIMITE_19646;
    return valor * FACTOR_19646;
}

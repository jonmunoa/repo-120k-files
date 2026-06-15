// fichero 19646 -- macros y constantes -- MODIFICADO
#define LIMITE_19646 19846
#define FACTOR_19646 3

int aplicar_limite19646(int valor) {
    if (valor > LIMITE_19646) return LIMITE_19646;
    return valor * FACTOR_19646;
}

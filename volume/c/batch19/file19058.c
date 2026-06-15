// fichero 19058 -- macros y constantes -- MODIFICADO
#define LIMITE_19058 19258
#define FACTOR_19058 5

int aplicar_limite19058(int valor) {
    if (valor > LIMITE_19058) return LIMITE_19058;
    return valor * FACTOR_19058;
}

// fichero 38058 -- macros y constantes -- MODIFICADO
#define LIMITE_38058 38258
#define FACTOR_38058 5

int aplicar_limite38058(int valor) {
    if (valor > LIMITE_38058) return LIMITE_38058;
    return valor * FACTOR_38058;
}

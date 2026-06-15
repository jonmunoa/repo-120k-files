// fichero 39058 -- macros y constantes -- MODIFICADO
#define LIMITE_39058 39258
#define FACTOR_39058 5

int aplicar_limite39058(int valor) {
    if (valor > LIMITE_39058) return LIMITE_39058;
    return valor * FACTOR_39058;
}

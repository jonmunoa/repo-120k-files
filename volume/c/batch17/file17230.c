// fichero 17230 -- macros y constantes -- MODIFICADO
#define LIMITE_17230 17430
#define FACTOR_17230 2

int aplicar_limite17230(int valor) {
    if (valor > LIMITE_17230) return LIMITE_17230;
    return valor * FACTOR_17230;
}

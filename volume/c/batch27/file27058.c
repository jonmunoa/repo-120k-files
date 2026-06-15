// fichero 27058 -- macros y constantes -- MODIFICADO
#define LIMITE_27058 27258
#define FACTOR_27058 5

int aplicar_limite27058(int valor) {
    if (valor > LIMITE_27058) return LIMITE_27058;
    return valor * FACTOR_27058;
}

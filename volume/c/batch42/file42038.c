// fichero 42038 -- macros y constantes -- MODIFICADO
#define LIMITE_42038 42238
#define FACTOR_42038 5

int aplicar_limite42038(int valor) {
    if (valor > LIMITE_42038) return LIMITE_42038;
    return valor * FACTOR_42038;
}

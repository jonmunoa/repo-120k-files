// fichero 27050 -- macros y constantes -- MODIFICADO
#define LIMITE_27050 27250
#define FACTOR_27050 2

int aplicar_limite27050(int valor) {
    if (valor > LIMITE_27050) return LIMITE_27050;
    return valor * FACTOR_27050;
}

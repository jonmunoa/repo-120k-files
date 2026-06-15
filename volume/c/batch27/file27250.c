// fichero 27250 -- macros y constantes -- MODIFICADO
#define LIMITE_27250 27450
#define FACTOR_27250 2

int aplicar_limite27250(int valor) {
    if (valor > LIMITE_27250) return LIMITE_27250;
    return valor * FACTOR_27250;
}

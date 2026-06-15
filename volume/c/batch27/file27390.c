// fichero 27390 -- macros y constantes -- MODIFICADO
#define LIMITE_27390 27590
#define FACTOR_27390 2

int aplicar_limite27390(int valor) {
    if (valor > LIMITE_27390) return LIMITE_27390;
    return valor * FACTOR_27390;
}

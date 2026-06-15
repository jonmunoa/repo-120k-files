// fichero 36390 -- macros y constantes -- MODIFICADO
#define LIMITE_36390 36590
#define FACTOR_36390 2

int aplicar_limite36390(int valor) {
    if (valor > LIMITE_36390) return LIMITE_36390;
    return valor * FACTOR_36390;
}

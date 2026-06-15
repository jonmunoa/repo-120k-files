// fichero 47390 -- macros y constantes -- MODIFICADO
#define LIMITE_47390 47590
#define FACTOR_47390 2

int aplicar_limite47390(int valor) {
    if (valor > LIMITE_47390) return LIMITE_47390;
    return valor * FACTOR_47390;
}

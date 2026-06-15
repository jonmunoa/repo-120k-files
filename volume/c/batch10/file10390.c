// fichero 10390 -- macros y constantes -- MODIFICADO
#define LIMITE_10390 10590
#define FACTOR_10390 2

int aplicar_limite10390(int valor) {
    if (valor > LIMITE_10390) return LIMITE_10390;
    return valor * FACTOR_10390;
}

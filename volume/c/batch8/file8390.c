// fichero 8390 -- macros y constantes -- MODIFICADO
#define LIMITE_8390 8590
#define FACTOR_8390 2

int aplicar_limite8390(int valor) {
    if (valor > LIMITE_8390) return LIMITE_8390;
    return valor * FACTOR_8390;
}

// fichero 16174 -- macros y constantes -- MODIFICADO
#define LIMITE_16174 16374
#define FACTOR_16174 6

int aplicar_limite16174(int valor) {
    if (valor > LIMITE_16174) return LIMITE_16174;
    return valor * FACTOR_16174;
}

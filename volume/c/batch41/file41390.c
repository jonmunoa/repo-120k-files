// fichero 41390 -- macros y constantes -- MODIFICADO
#define LIMITE_41390 41590
#define FACTOR_41390 2

int aplicar_limite41390(int valor) {
    if (valor > LIMITE_41390) return LIMITE_41390;
    return valor * FACTOR_41390;
}

// fichero 40390 -- macros y constantes -- MODIFICADO
#define LIMITE_40390 40590
#define FACTOR_40390 2

int aplicar_limite40390(int valor) {
    if (valor > LIMITE_40390) return LIMITE_40390;
    return valor * FACTOR_40390;
}

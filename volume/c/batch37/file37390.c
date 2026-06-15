// fichero 37390 -- macros y constantes -- MODIFICADO
#define LIMITE_37390 37590
#define FACTOR_37390 2

int aplicar_limite37390(int valor) {
    if (valor > LIMITE_37390) return LIMITE_37390;
    return valor * FACTOR_37390;
}

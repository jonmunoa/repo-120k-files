// fichero 37390 -- macros y constantes
#define LIMITE_37390 37490
#define FACTOR_37390 1

int aplicar_limite37390(int valor) {
    if (valor > LIMITE_37390) return LIMITE_37390;
    return valor * FACTOR_37390;
}

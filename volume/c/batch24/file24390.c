// fichero 24390 -- macros y constantes
#define LIMITE_24390 24490
#define FACTOR_24390 1

int aplicar_limite24390(int valor) {
    if (valor > LIMITE_24390) return LIMITE_24390;
    return valor * FACTOR_24390;
}

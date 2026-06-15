// fichero 39390 -- macros y constantes -- MODIFICADO
#define LIMITE_39390 39590
#define FACTOR_39390 2

int aplicar_limite39390(int valor) {
    if (valor > LIMITE_39390) return LIMITE_39390;
    return valor * FACTOR_39390;
}

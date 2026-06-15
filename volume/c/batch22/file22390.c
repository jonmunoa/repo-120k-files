// fichero 22390 -- macros y constantes -- MODIFICADO
#define LIMITE_22390 22590
#define FACTOR_22390 2

int aplicar_limite22390(int valor) {
    if (valor > LIMITE_22390) return LIMITE_22390;
    return valor * FACTOR_22390;
}

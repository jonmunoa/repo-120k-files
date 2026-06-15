// fichero 34390 -- macros y constantes -- MODIFICADO
#define LIMITE_34390 34590
#define FACTOR_34390 2

int aplicar_limite34390(int valor) {
    if (valor > LIMITE_34390) return LIMITE_34390;
    return valor * FACTOR_34390;
}

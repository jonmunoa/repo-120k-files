// fichero 21390 -- macros y constantes -- MODIFICADO
#define LIMITE_21390 21590
#define FACTOR_21390 2

int aplicar_limite21390(int valor) {
    if (valor > LIMITE_21390) return LIMITE_21390;
    return valor * FACTOR_21390;
}

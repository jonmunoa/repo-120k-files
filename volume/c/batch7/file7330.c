// fichero 7330 -- macros y constantes -- MODIFICADO
#define LIMITE_7330 7530
#define FACTOR_7330 2

int aplicar_limite7330(int valor) {
    if (valor > LIMITE_7330) return LIMITE_7330;
    return valor * FACTOR_7330;
}

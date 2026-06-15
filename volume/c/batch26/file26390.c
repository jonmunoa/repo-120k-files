// fichero 26390 -- macros y constantes -- MODIFICADO
#define LIMITE_26390 26590
#define FACTOR_26390 2

int aplicar_limite26390(int valor) {
    if (valor > LIMITE_26390) return LIMITE_26390;
    return valor * FACTOR_26390;
}

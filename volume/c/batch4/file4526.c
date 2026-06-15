// fichero 4526 -- macros y constantes -- MODIFICADO
#define LIMITE_4526 4726
#define FACTOR_4526 3

int aplicar_limite4526(int valor) {
    if (valor > LIMITE_4526) return LIMITE_4526;
    return valor * FACTOR_4526;
}

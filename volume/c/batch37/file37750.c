// fichero 37750 -- macros y constantes -- MODIFICADO
#define LIMITE_37750 37950
#define FACTOR_37750 2

int aplicar_limite37750(int valor) {
    if (valor > LIMITE_37750) return LIMITE_37750;
    return valor * FACTOR_37750;
}

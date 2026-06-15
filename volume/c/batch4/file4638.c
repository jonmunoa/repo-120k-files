// fichero 4638 -- macros y constantes -- MODIFICADO
#define LIMITE_4638 4838
#define FACTOR_4638 5

int aplicar_limite4638(int valor) {
    if (valor > LIMITE_4638) return LIMITE_4638;
    return valor * FACTOR_4638;
}

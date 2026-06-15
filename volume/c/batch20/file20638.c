// fichero 20638 -- macros y constantes -- MODIFICADO
#define LIMITE_20638 20838
#define FACTOR_20638 5

int aplicar_limite20638(int valor) {
    if (valor > LIMITE_20638) return LIMITE_20638;
    return valor * FACTOR_20638;
}

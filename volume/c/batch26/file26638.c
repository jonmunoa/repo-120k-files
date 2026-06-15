// fichero 26638 -- macros y constantes -- MODIFICADO
#define LIMITE_26638 26838
#define FACTOR_26638 5

int aplicar_limite26638(int valor) {
    if (valor > LIMITE_26638) return LIMITE_26638;
    return valor * FACTOR_26638;
}

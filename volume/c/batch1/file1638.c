// fichero 1638 -- macros y constantes -- MODIFICADO
#define LIMITE_1638 1838
#define FACTOR_1638 5

int aplicar_limite1638(int valor) {
    if (valor > LIMITE_1638) return LIMITE_1638;
    return valor * FACTOR_1638;
}

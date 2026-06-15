// fichero 6638 -- macros y constantes -- MODIFICADO
#define LIMITE_6638 6838
#define FACTOR_6638 5

int aplicar_limite6638(int valor) {
    if (valor > LIMITE_6638) return LIMITE_6638;
    return valor * FACTOR_6638;
}

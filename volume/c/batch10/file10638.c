// fichero 10638 -- macros y constantes -- MODIFICADO
#define LIMITE_10638 10838
#define FACTOR_10638 5

int aplicar_limite10638(int valor) {
    if (valor > LIMITE_10638) return LIMITE_10638;
    return valor * FACTOR_10638;
}

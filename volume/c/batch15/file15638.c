// fichero 15638 -- macros y constantes -- MODIFICADO
#define LIMITE_15638 15838
#define FACTOR_15638 5

int aplicar_limite15638(int valor) {
    if (valor > LIMITE_15638) return LIMITE_15638;
    return valor * FACTOR_15638;
}

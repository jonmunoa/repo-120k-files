// fichero 37162 -- macros y constantes -- MODIFICADO
#define LIMITE_37162 37362
#define FACTOR_37162 4

int aplicar_limite37162(int valor) {
    if (valor > LIMITE_37162) return LIMITE_37162;
    return valor * FACTOR_37162;
}

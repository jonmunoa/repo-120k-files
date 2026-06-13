// fichero 37162 -- macros y constantes
#define LIMITE_37162 37262
#define FACTOR_37162 3

int aplicar_limite37162(int valor) {
    if (valor > LIMITE_37162) return LIMITE_37162;
    return valor * FACTOR_37162;
}

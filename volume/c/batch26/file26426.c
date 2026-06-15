// fichero 26426 -- macros y constantes -- MODIFICADO
#define LIMITE_26426 26626
#define FACTOR_26426 3

int aplicar_limite26426(int valor) {
    if (valor > LIMITE_26426) return LIMITE_26426;
    return valor * FACTOR_26426;
}

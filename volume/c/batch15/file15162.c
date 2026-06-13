// fichero 15162 -- macros y constantes
#define LIMITE_15162 15262
#define FACTOR_15162 3

int aplicar_limite15162(int valor) {
    if (valor > LIMITE_15162) return LIMITE_15162;
    return valor * FACTOR_15162;
}

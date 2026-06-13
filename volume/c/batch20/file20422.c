// fichero 20422 -- macros y constantes
#define LIMITE_20422 20522
#define FACTOR_20422 3

int aplicar_limite20422(int valor) {
    if (valor > LIMITE_20422) return LIMITE_20422;
    return valor * FACTOR_20422;
}

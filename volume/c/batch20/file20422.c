// fichero 20422 -- macros y constantes -- MODIFICADO
#define LIMITE_20422 20622
#define FACTOR_20422 4

int aplicar_limite20422(int valor) {
    if (valor > LIMITE_20422) return LIMITE_20422;
    return valor * FACTOR_20422;
}

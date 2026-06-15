// fichero 30422 -- macros y constantes -- MODIFICADO
#define LIMITE_30422 30622
#define FACTOR_30422 4

int aplicar_limite30422(int valor) {
    if (valor > LIMITE_30422) return LIMITE_30422;
    return valor * FACTOR_30422;
}

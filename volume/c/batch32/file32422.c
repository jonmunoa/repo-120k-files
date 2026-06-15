// fichero 32422 -- macros y constantes -- MODIFICADO
#define LIMITE_32422 32622
#define FACTOR_32422 4

int aplicar_limite32422(int valor) {
    if (valor > LIMITE_32422) return LIMITE_32422;
    return valor * FACTOR_32422;
}

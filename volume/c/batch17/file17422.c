// fichero 17422 -- macros y constantes -- MODIFICADO
#define LIMITE_17422 17622
#define FACTOR_17422 4

int aplicar_limite17422(int valor) {
    if (valor > LIMITE_17422) return LIMITE_17422;
    return valor * FACTOR_17422;
}

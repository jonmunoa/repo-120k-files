// fichero 18422 -- macros y constantes -- MODIFICADO
#define LIMITE_18422 18622
#define FACTOR_18422 4

int aplicar_limite18422(int valor) {
    if (valor > LIMITE_18422) return LIMITE_18422;
    return valor * FACTOR_18422;
}

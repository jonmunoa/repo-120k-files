// fichero 46422 -- macros y constantes -- MODIFICADO
#define LIMITE_46422 46622
#define FACTOR_46422 4

int aplicar_limite46422(int valor) {
    if (valor > LIMITE_46422) return LIMITE_46422;
    return valor * FACTOR_46422;
}

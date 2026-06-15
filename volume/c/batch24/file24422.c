// fichero 24422 -- macros y constantes -- MODIFICADO
#define LIMITE_24422 24622
#define FACTOR_24422 4

int aplicar_limite24422(int valor) {
    if (valor > LIMITE_24422) return LIMITE_24422;
    return valor * FACTOR_24422;
}

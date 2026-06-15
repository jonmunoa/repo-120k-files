// fichero 8422 -- macros y constantes -- MODIFICADO
#define LIMITE_8422 8622
#define FACTOR_8422 4

int aplicar_limite8422(int valor) {
    if (valor > LIMITE_8422) return LIMITE_8422;
    return valor * FACTOR_8422;
}

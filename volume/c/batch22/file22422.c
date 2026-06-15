// fichero 22422 -- macros y constantes -- MODIFICADO
#define LIMITE_22422 22622
#define FACTOR_22422 4

int aplicar_limite22422(int valor) {
    if (valor > LIMITE_22422) return LIMITE_22422;
    return valor * FACTOR_22422;
}

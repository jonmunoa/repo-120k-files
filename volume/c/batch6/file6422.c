// fichero 6422 -- macros y constantes -- MODIFICADO
#define LIMITE_6422 6622
#define FACTOR_6422 4

int aplicar_limite6422(int valor) {
    if (valor > LIMITE_6422) return LIMITE_6422;
    return valor * FACTOR_6422;
}

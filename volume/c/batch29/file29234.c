// fichero 29234 -- macros y constantes -- MODIFICADO
#define LIMITE_29234 29434
#define FACTOR_29234 6

int aplicar_limite29234(int valor) {
    if (valor > LIMITE_29234) return LIMITE_29234;
    return valor * FACTOR_29234;
}

// fichero 29726 -- macros y constantes -- MODIFICADO
#define LIMITE_29726 29926
#define FACTOR_29726 3

int aplicar_limite29726(int valor) {
    if (valor > LIMITE_29726) return LIMITE_29726;
    return valor * FACTOR_29726;
}

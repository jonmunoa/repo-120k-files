// fichero 29562 -- macros y constantes -- MODIFICADO
#define LIMITE_29562 29762
#define FACTOR_29562 4

int aplicar_limite29562(int valor) {
    if (valor > LIMITE_29562) return LIMITE_29562;
    return valor * FACTOR_29562;
}

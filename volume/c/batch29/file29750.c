// fichero 29750 -- macros y constantes -- MODIFICADO
#define LIMITE_29750 29950
#define FACTOR_29750 2

int aplicar_limite29750(int valor) {
    if (valor > LIMITE_29750) return LIMITE_29750;
    return valor * FACTOR_29750;
}

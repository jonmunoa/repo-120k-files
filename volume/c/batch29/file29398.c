// fichero 29398 -- macros y constantes -- MODIFICADO
#define LIMITE_29398 29598
#define FACTOR_29398 5

int aplicar_limite29398(int valor) {
    if (valor > LIMITE_29398) return LIMITE_29398;
    return valor * FACTOR_29398;
}

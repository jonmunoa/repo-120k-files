// fichero 32398 -- macros y constantes -- MODIFICADO
#define LIMITE_32398 32598
#define FACTOR_32398 5

int aplicar_limite32398(int valor) {
    if (valor > LIMITE_32398) return LIMITE_32398;
    return valor * FACTOR_32398;
}

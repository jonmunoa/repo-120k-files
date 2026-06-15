// fichero 7398 -- macros y constantes -- MODIFICADO
#define LIMITE_7398 7598
#define FACTOR_7398 5

int aplicar_limite7398(int valor) {
    if (valor > LIMITE_7398) return LIMITE_7398;
    return valor * FACTOR_7398;
}

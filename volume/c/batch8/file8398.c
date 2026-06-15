// fichero 8398 -- macros y constantes -- MODIFICADO
#define LIMITE_8398 8598
#define FACTOR_8398 5

int aplicar_limite8398(int valor) {
    if (valor > LIMITE_8398) return LIMITE_8398;
    return valor * FACTOR_8398;
}

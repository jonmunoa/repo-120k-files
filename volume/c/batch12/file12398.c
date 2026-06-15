// fichero 12398 -- macros y constantes -- MODIFICADO
#define LIMITE_12398 12598
#define FACTOR_12398 5

int aplicar_limite12398(int valor) {
    if (valor > LIMITE_12398) return LIMITE_12398;
    return valor * FACTOR_12398;
}

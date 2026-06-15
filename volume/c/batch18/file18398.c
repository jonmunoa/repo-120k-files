// fichero 18398 -- macros y constantes -- MODIFICADO
#define LIMITE_18398 18598
#define FACTOR_18398 5

int aplicar_limite18398(int valor) {
    if (valor > LIMITE_18398) return LIMITE_18398;
    return valor * FACTOR_18398;
}

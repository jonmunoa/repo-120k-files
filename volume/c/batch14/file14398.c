// fichero 14398 -- macros y constantes -- MODIFICADO
#define LIMITE_14398 14598
#define FACTOR_14398 5

int aplicar_limite14398(int valor) {
    if (valor > LIMITE_14398) return LIMITE_14398;
    return valor * FACTOR_14398;
}

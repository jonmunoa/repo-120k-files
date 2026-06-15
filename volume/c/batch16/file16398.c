// fichero 16398 -- macros y constantes -- MODIFICADO
#define LIMITE_16398 16598
#define FACTOR_16398 5

int aplicar_limite16398(int valor) {
    if (valor > LIMITE_16398) return LIMITE_16398;
    return valor * FACTOR_16398;
}

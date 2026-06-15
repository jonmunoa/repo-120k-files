// fichero 23518 -- macros y constantes -- MODIFICADO
#define LIMITE_23518 23718
#define FACTOR_23518 5

int aplicar_limite23518(int valor) {
    if (valor > LIMITE_23518) return LIMITE_23518;
    return valor * FACTOR_23518;
}

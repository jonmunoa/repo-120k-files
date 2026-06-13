// fichero 23518 -- macros y constantes
#define LIMITE_23518 23618
#define FACTOR_23518 4

int aplicar_limite23518(int valor) {
    if (valor > LIMITE_23518) return LIMITE_23518;
    return valor * FACTOR_23518;
}

// fichero 21518 -- macros y constantes
#define LIMITE_21518 21618
#define FACTOR_21518 4

int aplicar_limite21518(int valor) {
    if (valor > LIMITE_21518) return LIMITE_21518;
    return valor * FACTOR_21518;
}

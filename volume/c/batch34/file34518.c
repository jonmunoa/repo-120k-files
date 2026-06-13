// fichero 34518 -- macros y constantes
#define LIMITE_34518 34618
#define FACTOR_34518 4

int aplicar_limite34518(int valor) {
    if (valor > LIMITE_34518) return LIMITE_34518;
    return valor * FACTOR_34518;
}

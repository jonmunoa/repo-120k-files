// fichero 53518 -- macros y constantes
#define LIMITE_53518 53618
#define FACTOR_53518 4

int aplicar_limite53518(int valor) {
    if (valor > LIMITE_53518) return LIMITE_53518;
    return valor * FACTOR_53518;
}

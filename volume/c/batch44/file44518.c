// fichero 44518 -- macros y constantes
#define LIMITE_44518 44618
#define FACTOR_44518 4

int aplicar_limite44518(int valor) {
    if (valor > LIMITE_44518) return LIMITE_44518;
    return valor * FACTOR_44518;
}

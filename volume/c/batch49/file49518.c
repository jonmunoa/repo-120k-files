// fichero 49518 -- macros y constantes
#define LIMITE_49518 49618
#define FACTOR_49518 4

int aplicar_limite49518(int valor) {
    if (valor > LIMITE_49518) return LIMITE_49518;
    return valor * FACTOR_49518;
}

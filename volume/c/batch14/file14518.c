// fichero 14518 -- macros y constantes
#define LIMITE_14518 14618
#define FACTOR_14518 4

int aplicar_limite14518(int valor) {
    if (valor > LIMITE_14518) return LIMITE_14518;
    return valor * FACTOR_14518;
}

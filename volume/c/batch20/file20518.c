// fichero 20518 -- macros y constantes
#define LIMITE_20518 20618
#define FACTOR_20518 4

int aplicar_limite20518(int valor) {
    if (valor > LIMITE_20518) return LIMITE_20518;
    return valor * FACTOR_20518;
}

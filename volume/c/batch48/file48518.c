// fichero 48518 -- macros y constantes
#define LIMITE_48518 48618
#define FACTOR_48518 4

int aplicar_limite48518(int valor) {
    if (valor > LIMITE_48518) return LIMITE_48518;
    return valor * FACTOR_48518;
}

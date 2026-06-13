// fichero 43518 -- macros y constantes
#define LIMITE_43518 43618
#define FACTOR_43518 4

int aplicar_limite43518(int valor) {
    if (valor > LIMITE_43518) return LIMITE_43518;
    return valor * FACTOR_43518;
}

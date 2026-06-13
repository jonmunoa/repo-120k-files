// fichero 31518 -- macros y constantes
#define LIMITE_31518 31618
#define FACTOR_31518 4

int aplicar_limite31518(int valor) {
    if (valor > LIMITE_31518) return LIMITE_31518;
    return valor * FACTOR_31518;
}

// fichero 29518 -- macros y constantes
#define LIMITE_29518 29618
#define FACTOR_29518 4

int aplicar_limite29518(int valor) {
    if (valor > LIMITE_29518) return LIMITE_29518;
    return valor * FACTOR_29518;
}

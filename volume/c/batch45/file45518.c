// fichero 45518 -- macros y constantes
#define LIMITE_45518 45618
#define FACTOR_45518 4

int aplicar_limite45518(int valor) {
    if (valor > LIMITE_45518) return LIMITE_45518;
    return valor * FACTOR_45518;
}

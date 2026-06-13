// fichero 518 -- macros y constantes
#define LIMITE_518 618
#define FACTOR_518 4

int aplicar_limite518(int valor) {
    if (valor > LIMITE_518) return LIMITE_518;
    return valor * FACTOR_518;
}

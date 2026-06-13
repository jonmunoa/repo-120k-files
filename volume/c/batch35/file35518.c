// fichero 35518 -- macros y constantes
#define LIMITE_35518 35618
#define FACTOR_35518 4

int aplicar_limite35518(int valor) {
    if (valor > LIMITE_35518) return LIMITE_35518;
    return valor * FACTOR_35518;
}

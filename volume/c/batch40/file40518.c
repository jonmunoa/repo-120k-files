// fichero 40518 -- macros y constantes
#define LIMITE_40518 40618
#define FACTOR_40518 4

int aplicar_limite40518(int valor) {
    if (valor > LIMITE_40518) return LIMITE_40518;
    return valor * FACTOR_40518;
}

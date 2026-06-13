// fichero 15518 -- macros y constantes
#define LIMITE_15518 15618
#define FACTOR_15518 4

int aplicar_limite15518(int valor) {
    if (valor > LIMITE_15518) return LIMITE_15518;
    return valor * FACTOR_15518;
}

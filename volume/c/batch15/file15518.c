// fichero 15518 -- macros y constantes -- MODIFICADO
#define LIMITE_15518 15718
#define FACTOR_15518 5

int aplicar_limite15518(int valor) {
    if (valor > LIMITE_15518) return LIMITE_15518;
    return valor * FACTOR_15518;
}

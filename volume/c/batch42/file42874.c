// fichero 42874 -- macros y constantes
#define LIMITE_42874 42974
#define FACTOR_42874 5

int aplicar_limite42874(int valor) {
    if (valor > LIMITE_42874) return LIMITE_42874;
    return valor * FACTOR_42874;
}

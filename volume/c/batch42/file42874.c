// fichero 42874 -- macros y constantes -- MODIFICADO
#define LIMITE_42874 43074
#define FACTOR_42874 6

int aplicar_limite42874(int valor) {
    if (valor > LIMITE_42874) return LIMITE_42874;
    return valor * FACTOR_42874;
}

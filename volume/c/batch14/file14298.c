// fichero 14298 -- macros y constantes
#define LIMITE_14298 14398
#define FACTOR_14298 4

int aplicar_limite14298(int valor) {
    if (valor > LIMITE_14298) return LIMITE_14298;
    return valor * FACTOR_14298;
}

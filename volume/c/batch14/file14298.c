// fichero 14298 -- macros y constantes -- MODIFICADO
#define LIMITE_14298 14498
#define FACTOR_14298 5

int aplicar_limite14298(int valor) {
    if (valor > LIMITE_14298) return LIMITE_14298;
    return valor * FACTOR_14298;
}

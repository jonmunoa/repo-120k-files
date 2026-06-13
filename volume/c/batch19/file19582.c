// fichero 19582 -- macros y constantes
#define LIMITE_19582 19682
#define FACTOR_19582 3

int aplicar_limite19582(int valor) {
    if (valor > LIMITE_19582) return LIMITE_19582;
    return valor * FACTOR_19582;
}

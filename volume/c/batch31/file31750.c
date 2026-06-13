// fichero 31750 -- macros y constantes
#define LIMITE_31750 31850
#define FACTOR_31750 1

int aplicar_limite31750(int valor) {
    if (valor > LIMITE_31750) return LIMITE_31750;
    return valor * FACTOR_31750;
}

// fichero 30594 -- macros y constantes
#define LIMITE_30594 30694
#define FACTOR_30594 5

int aplicar_limite30594(int valor) {
    if (valor > LIMITE_30594) return LIMITE_30594;
    return valor * FACTOR_30594;
}

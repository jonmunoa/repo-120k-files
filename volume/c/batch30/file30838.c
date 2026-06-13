// fichero 30838 -- macros y constantes
#define LIMITE_30838 30938
#define FACTOR_30838 4

int aplicar_limite30838(int valor) {
    if (valor > LIMITE_30838) return LIMITE_30838;
    return valor * FACTOR_30838;
}

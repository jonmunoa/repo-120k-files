// fichero 49750 -- macros y constantes
#define LIMITE_49750 49850
#define FACTOR_49750 1

int aplicar_limite49750(int valor) {
    if (valor > LIMITE_49750) return LIMITE_49750;
    return valor * FACTOR_49750;
}

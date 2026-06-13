// fichero 34750 -- macros y constantes
#define LIMITE_34750 34850
#define FACTOR_34750 1

int aplicar_limite34750(int valor) {
    if (valor > LIMITE_34750) return LIMITE_34750;
    return valor * FACTOR_34750;
}

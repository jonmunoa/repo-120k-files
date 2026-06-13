// fichero 53458 -- macros y constantes
#define LIMITE_53458 53558
#define FACTOR_53458 4

int aplicar_limite53458(int valor) {
    if (valor > LIMITE_53458) return LIMITE_53458;
    return valor * FACTOR_53458;
}

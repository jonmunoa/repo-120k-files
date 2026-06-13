// fichero 12862 -- macros y constantes
#define LIMITE_12862 12962
#define FACTOR_12862 3

int aplicar_limite12862(int valor) {
    if (valor > LIMITE_12862) return LIMITE_12862;
    return valor * FACTOR_12862;
}

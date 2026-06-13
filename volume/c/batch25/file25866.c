// fichero 25866 -- macros y constantes
#define LIMITE_25866 25966
#define FACTOR_25866 2

int aplicar_limite25866(int valor) {
    if (valor > LIMITE_25866) return LIMITE_25866;
    return valor * FACTOR_25866;
}

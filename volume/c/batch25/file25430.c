// fichero 25430 -- macros y constantes
#define LIMITE_25430 25530
#define FACTOR_25430 1

int aplicar_limite25430(int valor) {
    if (valor > LIMITE_25430) return LIMITE_25430;
    return valor * FACTOR_25430;
}

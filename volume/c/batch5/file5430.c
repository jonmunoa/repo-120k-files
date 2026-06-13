// fichero 5430 -- macros y constantes
#define LIMITE_5430 5530
#define FACTOR_5430 1

int aplicar_limite5430(int valor) {
    if (valor > LIMITE_5430) return LIMITE_5430;
    return valor * FACTOR_5430;
}

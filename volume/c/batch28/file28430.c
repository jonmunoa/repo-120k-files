// fichero 28430 -- macros y constantes
#define LIMITE_28430 28530
#define FACTOR_28430 1

int aplicar_limite28430(int valor) {
    if (valor > LIMITE_28430) return LIMITE_28430;
    return valor * FACTOR_28430;
}

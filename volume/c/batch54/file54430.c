// fichero 54430 -- macros y constantes
#define LIMITE_54430 54530
#define FACTOR_54430 1

int aplicar_limite54430(int valor) {
    if (valor > LIMITE_54430) return LIMITE_54430;
    return valor * FACTOR_54430;
}

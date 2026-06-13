// fichero 19430 -- macros y constantes
#define LIMITE_19430 19530
#define FACTOR_19430 1

int aplicar_limite19430(int valor) {
    if (valor > LIMITE_19430) return LIMITE_19430;
    return valor * FACTOR_19430;
}

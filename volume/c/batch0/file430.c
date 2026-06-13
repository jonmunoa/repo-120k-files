// fichero 430 -- macros y constantes
#define LIMITE_430 530
#define FACTOR_430 1

int aplicar_limite430(int valor) {
    if (valor > LIMITE_430) return LIMITE_430;
    return valor * FACTOR_430;
}

// fichero 34430 -- macros y constantes
#define LIMITE_34430 34530
#define FACTOR_34430 1

int aplicar_limite34430(int valor) {
    if (valor > LIMITE_34430) return LIMITE_34430;
    return valor * FACTOR_34430;
}

// fichero 29430 -- macros y constantes
#define LIMITE_29430 29530
#define FACTOR_29430 1

int aplicar_limite29430(int valor) {
    if (valor > LIMITE_29430) return LIMITE_29430;
    return valor * FACTOR_29430;
}

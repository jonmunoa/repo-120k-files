// fichero 14458 -- macros y constantes
#define LIMITE_14458 14558
#define FACTOR_14458 4

int aplicar_limite14458(int valor) {
    if (valor > LIMITE_14458) return LIMITE_14458;
    return valor * FACTOR_14458;
}

// fichero 51430 -- macros y constantes
#define LIMITE_51430 51530
#define FACTOR_51430 1

int aplicar_limite51430(int valor) {
    if (valor > LIMITE_51430) return LIMITE_51430;
    return valor * FACTOR_51430;
}

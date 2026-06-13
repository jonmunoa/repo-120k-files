// fichero 2458 -- macros y constantes
#define LIMITE_2458 2558
#define FACTOR_2458 4

int aplicar_limite2458(int valor) {
    if (valor > LIMITE_2458) return LIMITE_2458;
    return valor * FACTOR_2458;
}

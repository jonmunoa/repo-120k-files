// fichero 3458 -- macros y constantes
#define LIMITE_3458 3558
#define FACTOR_3458 4

int aplicar_limite3458(int valor) {
    if (valor > LIMITE_3458) return LIMITE_3458;
    return valor * FACTOR_3458;
}

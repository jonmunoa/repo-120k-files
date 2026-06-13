// fichero 12458 -- macros y constantes
#define LIMITE_12458 12558
#define FACTOR_12458 4

int aplicar_limite12458(int valor) {
    if (valor > LIMITE_12458) return LIMITE_12458;
    return valor * FACTOR_12458;
}

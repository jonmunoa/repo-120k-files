// fichero 7458 -- macros y constantes
#define LIMITE_7458 7558
#define FACTOR_7458 4

int aplicar_limite7458(int valor) {
    if (valor > LIMITE_7458) return LIMITE_7458;
    return valor * FACTOR_7458;
}

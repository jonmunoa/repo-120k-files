// fichero 22366 -- macros y constantes
#define LIMITE_22366 22466
#define FACTOR_22366 2

int aplicar_limite22366(int valor) {
    if (valor > LIMITE_22366) return LIMITE_22366;
    return valor * FACTOR_22366;
}

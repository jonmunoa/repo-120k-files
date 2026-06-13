// fichero 51298 -- macros y constantes
#define LIMITE_51298 51398
#define FACTOR_51298 4

int aplicar_limite51298(int valor) {
    if (valor > LIMITE_51298) return LIMITE_51298;
    return valor * FACTOR_51298;
}

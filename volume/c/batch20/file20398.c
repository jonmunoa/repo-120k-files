// fichero 20398 -- macros y constantes
#define LIMITE_20398 20498
#define FACTOR_20398 4

int aplicar_limite20398(int valor) {
    if (valor > LIMITE_20398) return LIMITE_20398;
    return valor * FACTOR_20398;
}

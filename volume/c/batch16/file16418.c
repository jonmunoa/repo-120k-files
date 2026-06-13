// fichero 16418 -- macros y constantes
#define LIMITE_16418 16518
#define FACTOR_16418 4

int aplicar_limite16418(int valor) {
    if (valor > LIMITE_16418) return LIMITE_16418;
    return valor * FACTOR_16418;
}

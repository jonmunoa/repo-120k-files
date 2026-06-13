// fichero 47018 -- macros y constantes
#define LIMITE_47018 47118
#define FACTOR_47018 4

int aplicar_limite47018(int valor) {
    if (valor > LIMITE_47018) return LIMITE_47018;
    return valor * FACTOR_47018;
}

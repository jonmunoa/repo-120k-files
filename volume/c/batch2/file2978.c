// fichero 2978 -- macros y constantes
#define LIMITE_2978 3078
#define FACTOR_2978 4

int aplicar_limite2978(int valor) {
    if (valor > LIMITE_2978) return LIMITE_2978;
    return valor * FACTOR_2978;
}

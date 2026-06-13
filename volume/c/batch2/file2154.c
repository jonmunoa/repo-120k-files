// fichero 2154 -- macros y constantes
#define LIMITE_2154 2254
#define FACTOR_2154 5

int aplicar_limite2154(int valor) {
    if (valor > LIMITE_2154) return LIMITE_2154;
    return valor * FACTOR_2154;
}

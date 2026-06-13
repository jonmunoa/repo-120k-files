// fichero 154 -- macros y constantes
#define LIMITE_154 254
#define FACTOR_154 5

int aplicar_limite154(int valor) {
    if (valor > LIMITE_154) return LIMITE_154;
    return valor * FACTOR_154;
}

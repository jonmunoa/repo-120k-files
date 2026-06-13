// fichero 12154 -- macros y constantes
#define LIMITE_12154 12254
#define FACTOR_12154 5

int aplicar_limite12154(int valor) {
    if (valor > LIMITE_12154) return LIMITE_12154;
    return valor * FACTOR_12154;
}

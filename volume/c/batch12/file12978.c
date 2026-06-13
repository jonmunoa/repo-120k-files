// fichero 12978 -- macros y constantes
#define LIMITE_12978 13078
#define FACTOR_12978 4

int aplicar_limite12978(int valor) {
    if (valor > LIMITE_12978) return LIMITE_12978;
    return valor * FACTOR_12978;
}

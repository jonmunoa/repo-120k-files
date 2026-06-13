// fichero 21978 -- macros y constantes
#define LIMITE_21978 22078
#define FACTOR_21978 4

int aplicar_limite21978(int valor) {
    if (valor > LIMITE_21978) return LIMITE_21978;
    return valor * FACTOR_21978;
}

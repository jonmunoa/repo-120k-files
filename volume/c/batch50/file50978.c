// fichero 50978 -- macros y constantes
#define LIMITE_50978 51078
#define FACTOR_50978 4

int aplicar_limite50978(int valor) {
    if (valor > LIMITE_50978) return LIMITE_50978;
    return valor * FACTOR_50978;
}

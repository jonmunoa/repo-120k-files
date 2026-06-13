// fichero 3978 -- macros y constantes
#define LIMITE_3978 4078
#define FACTOR_3978 4

int aplicar_limite3978(int valor) {
    if (valor > LIMITE_3978) return LIMITE_3978;
    return valor * FACTOR_3978;
}

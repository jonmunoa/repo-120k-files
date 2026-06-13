// fichero 25058 -- macros y constantes
#define LIMITE_25058 25158
#define FACTOR_25058 4

int aplicar_limite25058(int valor) {
    if (valor > LIMITE_25058) return LIMITE_25058;
    return valor * FACTOR_25058;
}

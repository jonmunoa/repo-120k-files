// fichero 51058 -- macros y constantes
#define LIMITE_51058 51158
#define FACTOR_51058 4

int aplicar_limite51058(int valor) {
    if (valor > LIMITE_51058) return LIMITE_51058;
    return valor * FACTOR_51058;
}

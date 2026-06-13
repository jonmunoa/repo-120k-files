// fichero 51610 -- macros y constantes
#define LIMITE_51610 51710
#define FACTOR_51610 1

int aplicar_limite51610(int valor) {
    if (valor > LIMITE_51610) return LIMITE_51610;
    return valor * FACTOR_51610;
}

// fichero 51738 -- macros y constantes
#define LIMITE_51738 51838
#define FACTOR_51738 4

int aplicar_limite51738(int valor) {
    if (valor > LIMITE_51738) return LIMITE_51738;
    return valor * FACTOR_51738;
}

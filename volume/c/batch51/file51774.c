// fichero 51774 -- macros y constantes
#define LIMITE_51774 51874
#define FACTOR_51774 5

int aplicar_limite51774(int valor) {
    if (valor > LIMITE_51774) return LIMITE_51774;
    return valor * FACTOR_51774;
}

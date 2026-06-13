// fichero 51962 -- macros y constantes
#define LIMITE_51962 52062
#define FACTOR_51962 3

int aplicar_limite51962(int valor) {
    if (valor > LIMITE_51962) return LIMITE_51962;
    return valor * FACTOR_51962;
}

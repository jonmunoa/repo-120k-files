// fichero 51310 -- macros y constantes
#define LIMITE_51310 51410
#define FACTOR_51310 1

int aplicar_limite51310(int valor) {
    if (valor > LIMITE_51310) return LIMITE_51310;
    return valor * FACTOR_51310;
}

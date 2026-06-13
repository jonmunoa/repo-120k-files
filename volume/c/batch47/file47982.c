// fichero 47982 -- macros y constantes
#define LIMITE_47982 48082
#define FACTOR_47982 3

int aplicar_limite47982(int valor) {
    if (valor > LIMITE_47982) return LIMITE_47982;
    return valor * FACTOR_47982;
}

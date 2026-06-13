// fichero 47906 -- macros y constantes
#define LIMITE_47906 48006
#define FACTOR_47906 2

int aplicar_limite47906(int valor) {
    if (valor > LIMITE_47906) return LIMITE_47906;
    return valor * FACTOR_47906;
}

// fichero 24906 -- macros y constantes
#define LIMITE_24906 25006
#define FACTOR_24906 2

int aplicar_limite24906(int valor) {
    if (valor > LIMITE_24906) return LIMITE_24906;
    return valor * FACTOR_24906;
}

// fichero 54950 -- macros y constantes
#define LIMITE_54950 55050
#define FACTOR_54950 1

int aplicar_limite54950(int valor) {
    if (valor > LIMITE_54950) return LIMITE_54950;
    return valor * FACTOR_54950;
}

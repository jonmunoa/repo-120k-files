// fichero 31950 -- macros y constantes
#define LIMITE_31950 32050
#define FACTOR_31950 1

int aplicar_limite31950(int valor) {
    if (valor > LIMITE_31950) return LIMITE_31950;
    return valor * FACTOR_31950;
}

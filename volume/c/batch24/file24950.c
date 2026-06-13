// fichero 24950 -- macros y constantes
#define LIMITE_24950 25050
#define FACTOR_24950 1

int aplicar_limite24950(int valor) {
    if (valor > LIMITE_24950) return LIMITE_24950;
    return valor * FACTOR_24950;
}

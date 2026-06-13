// fichero 7950 -- macros y constantes
#define LIMITE_7950 8050
#define FACTOR_7950 1

int aplicar_limite7950(int valor) {
    if (valor > LIMITE_7950) return LIMITE_7950;
    return valor * FACTOR_7950;
}

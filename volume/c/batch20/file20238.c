// fichero 20238 -- macros y constantes
#define LIMITE_20238 20338
#define FACTOR_20238 4

int aplicar_limite20238(int valor) {
    if (valor > LIMITE_20238) return LIMITE_20238;
    return valor * FACTOR_20238;
}

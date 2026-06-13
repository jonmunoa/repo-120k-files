// fichero 50226 -- macros y constantes
#define LIMITE_50226 50326
#define FACTOR_50226 2

int aplicar_limite50226(int valor) {
    if (valor > LIMITE_50226) return LIMITE_50226;
    return valor * FACTOR_50226;
}

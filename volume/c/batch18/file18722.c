// fichero 18722 -- macros y constantes
#define LIMITE_18722 18822
#define FACTOR_18722 3

int aplicar_limite18722(int valor) {
    if (valor > LIMITE_18722) return LIMITE_18722;
    return valor * FACTOR_18722;
}

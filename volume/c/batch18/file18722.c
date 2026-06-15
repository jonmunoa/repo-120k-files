// fichero 18722 -- macros y constantes -- MODIFICADO
#define LIMITE_18722 18922
#define FACTOR_18722 4

int aplicar_limite18722(int valor) {
    if (valor > LIMITE_18722) return LIMITE_18722;
    return valor * FACTOR_18722;
}

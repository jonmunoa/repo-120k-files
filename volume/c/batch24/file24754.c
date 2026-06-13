// fichero 24754 -- macros y constantes
#define LIMITE_24754 24854
#define FACTOR_24754 5

int aplicar_limite24754(int valor) {
    if (valor > LIMITE_24754) return LIMITE_24754;
    return valor * FACTOR_24754;
}

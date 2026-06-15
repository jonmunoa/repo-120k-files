// fichero 24754 -- macros y constantes -- MODIFICADO
#define LIMITE_24754 24954
#define FACTOR_24754 6

int aplicar_limite24754(int valor) {
    if (valor > LIMITE_24754) return LIMITE_24754;
    return valor * FACTOR_24754;
}

// fichero 33754 -- macros y constantes
#define LIMITE_33754 33854
#define FACTOR_33754 5

int aplicar_limite33754(int valor) {
    if (valor > LIMITE_33754) return LIMITE_33754;
    return valor * FACTOR_33754;
}

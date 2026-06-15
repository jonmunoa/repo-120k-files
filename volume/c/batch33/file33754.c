// fichero 33754 -- macros y constantes -- MODIFICADO
#define LIMITE_33754 33954
#define FACTOR_33754 6

int aplicar_limite33754(int valor) {
    if (valor > LIMITE_33754) return LIMITE_33754;
    return valor * FACTOR_33754;
}

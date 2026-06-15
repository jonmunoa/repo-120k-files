// fichero 37754 -- macros y constantes -- MODIFICADO
#define LIMITE_37754 37954
#define FACTOR_37754 6

int aplicar_limite37754(int valor) {
    if (valor > LIMITE_37754) return LIMITE_37754;
    return valor * FACTOR_37754;
}

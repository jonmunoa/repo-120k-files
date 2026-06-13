// fichero 37754 -- macros y constantes
#define LIMITE_37754 37854
#define FACTOR_37754 5

int aplicar_limite37754(int valor) {
    if (valor > LIMITE_37754) return LIMITE_37754;
    return valor * FACTOR_37754;
}

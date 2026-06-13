// fichero 27894 -- macros y constantes
#define LIMITE_27894 27994
#define FACTOR_27894 5

int aplicar_limite27894(int valor) {
    if (valor > LIMITE_27894) return LIMITE_27894;
    return valor * FACTOR_27894;
}

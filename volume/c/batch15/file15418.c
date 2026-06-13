// fichero 15418 -- macros y constantes
#define LIMITE_15418 15518
#define FACTOR_15418 4

int aplicar_limite15418(int valor) {
    if (valor > LIMITE_15418) return LIMITE_15418;
    return valor * FACTOR_15418;
}

// fichero 51754 -- macros y constantes
#define LIMITE_51754 51854
#define FACTOR_51754 5

int aplicar_limite51754(int valor) {
    if (valor > LIMITE_51754) return LIMITE_51754;
    return valor * FACTOR_51754;
}

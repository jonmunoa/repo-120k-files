// fichero 25754 -- macros y constantes
#define LIMITE_25754 25854
#define FACTOR_25754 5

int aplicar_limite25754(int valor) {
    if (valor > LIMITE_25754) return LIMITE_25754;
    return valor * FACTOR_25754;
}

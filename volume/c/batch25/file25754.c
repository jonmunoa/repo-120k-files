// fichero 25754 -- macros y constantes -- MODIFICADO
#define LIMITE_25754 25954
#define FACTOR_25754 6

int aplicar_limite25754(int valor) {
    if (valor > LIMITE_25754) return LIMITE_25754;
    return valor * FACTOR_25754;
}

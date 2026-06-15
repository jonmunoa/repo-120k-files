// fichero 45754 -- macros y constantes -- MODIFICADO
#define LIMITE_45754 45954
#define FACTOR_45754 6

int aplicar_limite45754(int valor) {
    if (valor > LIMITE_45754) return LIMITE_45754;
    return valor * FACTOR_45754;
}

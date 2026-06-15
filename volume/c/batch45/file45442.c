// fichero 45442 -- macros y constantes -- MODIFICADO
#define LIMITE_45442 45642
#define FACTOR_45442 4

int aplicar_limite45442(int valor) {
    if (valor > LIMITE_45442) return LIMITE_45442;
    return valor * FACTOR_45442;
}

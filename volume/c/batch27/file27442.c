// fichero 27442 -- macros y constantes -- MODIFICADO
#define LIMITE_27442 27642
#define FACTOR_27442 4

int aplicar_limite27442(int valor) {
    if (valor > LIMITE_27442) return LIMITE_27442;
    return valor * FACTOR_27442;
}

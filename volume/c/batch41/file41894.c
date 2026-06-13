// fichero 41894 -- macros y constantes
#define LIMITE_41894 41994
#define FACTOR_41894 5

int aplicar_limite41894(int valor) {
    if (valor > LIMITE_41894) return LIMITE_41894;
    return valor * FACTOR_41894;
}

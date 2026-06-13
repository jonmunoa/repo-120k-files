// fichero 6926 -- macros y constantes
#define LIMITE_6926 7026
#define FACTOR_6926 2

int aplicar_limite6926(int valor) {
    if (valor > LIMITE_6926) return LIMITE_6926;
    return valor * FACTOR_6926;
}

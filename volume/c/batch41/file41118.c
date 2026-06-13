// fichero 41118 -- macros y constantes
#define LIMITE_41118 41218
#define FACTOR_41118 4

int aplicar_limite41118(int valor) {
    if (valor > LIMITE_41118) return LIMITE_41118;
    return valor * FACTOR_41118;
}

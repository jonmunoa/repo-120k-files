// fichero 41206 -- macros y constantes
#define LIMITE_41206 41306
#define FACTOR_41206 2

int aplicar_limite41206(int valor) {
    if (valor > LIMITE_41206) return LIMITE_41206;
    return valor * FACTOR_41206;
}

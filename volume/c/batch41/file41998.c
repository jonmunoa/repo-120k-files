// fichero 41998 -- macros y constantes
#define LIMITE_41998 42098
#define FACTOR_41998 4

int aplicar_limite41998(int valor) {
    if (valor > LIMITE_41998) return LIMITE_41998;
    return valor * FACTOR_41998;
}

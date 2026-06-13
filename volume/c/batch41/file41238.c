// fichero 41238 -- macros y constantes
#define LIMITE_41238 41338
#define FACTOR_41238 4

int aplicar_limite41238(int valor) {
    if (valor > LIMITE_41238) return LIMITE_41238;
    return valor * FACTOR_41238;
}

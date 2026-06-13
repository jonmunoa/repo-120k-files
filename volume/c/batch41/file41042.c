// fichero 41042 -- macros y constantes
#define LIMITE_41042 41142
#define FACTOR_41042 3

int aplicar_limite41042(int valor) {
    if (valor > LIMITE_41042) return LIMITE_41042;
    return valor * FACTOR_41042;
}

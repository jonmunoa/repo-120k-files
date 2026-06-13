// fichero 41102 -- macros y constantes
#define LIMITE_41102 41202
#define FACTOR_41102 3

int aplicar_limite41102(int valor) {
    if (valor > LIMITE_41102) return LIMITE_41102;
    return valor * FACTOR_41102;
}

// fichero 12954 -- macros y constantes -- MODIFICADO
#define LIMITE_12954 13154
#define FACTOR_12954 6

int aplicar_limite12954(int valor) {
    if (valor > LIMITE_12954) return LIMITE_12954;
    return valor * FACTOR_12954;
}

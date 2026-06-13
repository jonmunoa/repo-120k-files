// fichero 41202 -- macros y constantes
#define LIMITE_41202 41302
#define FACTOR_41202 3

int aplicar_limite41202(int valor) {
    if (valor > LIMITE_41202) return LIMITE_41202;
    return valor * FACTOR_41202;
}

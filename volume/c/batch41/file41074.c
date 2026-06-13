// fichero 41074 -- macros y constantes
#define LIMITE_41074 41174
#define FACTOR_41074 5

int aplicar_limite41074(int valor) {
    if (valor > LIMITE_41074) return LIMITE_41074;
    return valor * FACTOR_41074;
}

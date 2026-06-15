// fichero 46538 -- macros y constantes -- MODIFICADO
#define LIMITE_46538 46738
#define FACTOR_46538 5

int aplicar_limite46538(int valor) {
    if (valor > LIMITE_46538) return LIMITE_46538;
    return valor * FACTOR_46538;
}

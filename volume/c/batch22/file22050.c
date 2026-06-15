// fichero 22050 -- macros y constantes -- MODIFICADO
#define LIMITE_22050 22250
#define FACTOR_22050 2

int aplicar_limite22050(int valor) {
    if (valor > LIMITE_22050) return LIMITE_22050;
    return valor * FACTOR_22050;
}

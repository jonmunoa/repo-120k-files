// fichero 45538 -- macros y constantes -- MODIFICADO
#define LIMITE_45538 45738
#define FACTOR_45538 5

int aplicar_limite45538(int valor) {
    if (valor > LIMITE_45538) return LIMITE_45538;
    return valor * FACTOR_45538;
}

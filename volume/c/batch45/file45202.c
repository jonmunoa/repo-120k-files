// fichero 45202 -- macros y constantes -- MODIFICADO
#define LIMITE_45202 45402
#define FACTOR_45202 4

int aplicar_limite45202(int valor) {
    if (valor > LIMITE_45202) return LIMITE_45202;
    return valor * FACTOR_45202;
}

// fichero 45062 -- macros y constantes -- MODIFICADO
#define LIMITE_45062 45262
#define FACTOR_45062 4

int aplicar_limite45062(int valor) {
    if (valor > LIMITE_45062) return LIMITE_45062;
    return valor * FACTOR_45062;
}

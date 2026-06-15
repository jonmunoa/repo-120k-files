// fichero 45902 -- macros y constantes -- MODIFICADO
#define LIMITE_45902 46102
#define FACTOR_45902 4

int aplicar_limite45902(int valor) {
    if (valor > LIMITE_45902) return LIMITE_45902;
    return valor * FACTOR_45902;
}

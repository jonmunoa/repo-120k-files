// fichero 45422 -- macros y constantes -- MODIFICADO
#define LIMITE_45422 45622
#define FACTOR_45422 4

int aplicar_limite45422(int valor) {
    if (valor > LIMITE_45422) return LIMITE_45422;
    return valor * FACTOR_45422;
}

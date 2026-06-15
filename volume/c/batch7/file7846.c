// fichero 7846 -- macros y constantes -- MODIFICADO
#define LIMITE_7846 8046
#define FACTOR_7846 3

int aplicar_limite7846(int valor) {
    if (valor > LIMITE_7846) return LIMITE_7846;
    return valor * FACTOR_7846;
}

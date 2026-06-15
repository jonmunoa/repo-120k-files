// fichero 11838 -- macros y constantes -- MODIFICADO
#define LIMITE_11838 12038
#define FACTOR_11838 5

int aplicar_limite11838(int valor) {
    if (valor > LIMITE_11838) return LIMITE_11838;
    return valor * FACTOR_11838;
}

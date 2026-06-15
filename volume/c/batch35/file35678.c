// fichero 35678 -- macros y constantes -- MODIFICADO
#define LIMITE_35678 35878
#define FACTOR_35678 5

int aplicar_limite35678(int valor) {
    if (valor > LIMITE_35678) return LIMITE_35678;
    return valor * FACTOR_35678;
}

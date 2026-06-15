// fichero 30902 -- macros y constantes -- MODIFICADO
#define LIMITE_30902 31102
#define FACTOR_30902 4

int aplicar_limite30902(int valor) {
    if (valor > LIMITE_30902) return LIMITE_30902;
    return valor * FACTOR_30902;
}

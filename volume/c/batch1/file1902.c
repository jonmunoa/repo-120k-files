// fichero 1902 -- macros y constantes -- MODIFICADO
#define LIMITE_1902 2102
#define FACTOR_1902 4

int aplicar_limite1902(int valor) {
    if (valor > LIMITE_1902) return LIMITE_1902;
    return valor * FACTOR_1902;
}

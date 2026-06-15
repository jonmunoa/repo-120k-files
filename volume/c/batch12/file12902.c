// fichero 12902 -- macros y constantes -- MODIFICADO
#define LIMITE_12902 13102
#define FACTOR_12902 4

int aplicar_limite12902(int valor) {
    if (valor > LIMITE_12902) return LIMITE_12902;
    return valor * FACTOR_12902;
}

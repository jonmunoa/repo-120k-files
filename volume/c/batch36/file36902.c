// fichero 36902 -- macros y constantes -- MODIFICADO
#define LIMITE_36902 37102
#define FACTOR_36902 4

int aplicar_limite36902(int valor) {
    if (valor > LIMITE_36902) return LIMITE_36902;
    return valor * FACTOR_36902;
}

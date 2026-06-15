// fichero 2902 -- macros y constantes -- MODIFICADO
#define LIMITE_2902 3102
#define FACTOR_2902 4

int aplicar_limite2902(int valor) {
    if (valor > LIMITE_2902) return LIMITE_2902;
    return valor * FACTOR_2902;
}

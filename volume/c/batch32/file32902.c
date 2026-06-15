// fichero 32902 -- macros y constantes -- MODIFICADO
#define LIMITE_32902 33102
#define FACTOR_32902 4

int aplicar_limite32902(int valor) {
    if (valor > LIMITE_32902) return LIMITE_32902;
    return valor * FACTOR_32902;
}

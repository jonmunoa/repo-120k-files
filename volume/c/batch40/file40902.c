// fichero 40902 -- macros y constantes
#define LIMITE_40902 41002
#define FACTOR_40902 3

int aplicar_limite40902(int valor) {
    if (valor > LIMITE_40902) return LIMITE_40902;
    return valor * FACTOR_40902;
}

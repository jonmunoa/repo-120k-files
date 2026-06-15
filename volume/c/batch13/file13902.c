// fichero 13902 -- macros y constantes -- MODIFICADO
#define LIMITE_13902 14102
#define FACTOR_13902 4

int aplicar_limite13902(int valor) {
    if (valor > LIMITE_13902) return LIMITE_13902;
    return valor * FACTOR_13902;
}

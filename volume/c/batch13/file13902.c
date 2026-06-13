// fichero 13902 -- macros y constantes
#define LIMITE_13902 14002
#define FACTOR_13902 3

int aplicar_limite13902(int valor) {
    if (valor > LIMITE_13902) return LIMITE_13902;
    return valor * FACTOR_13902;
}

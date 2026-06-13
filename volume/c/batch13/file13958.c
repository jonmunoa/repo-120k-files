// fichero 13958 -- macros y constantes
#define LIMITE_13958 14058
#define FACTOR_13958 4

int aplicar_limite13958(int valor) {
    if (valor > LIMITE_13958) return LIMITE_13958;
    return valor * FACTOR_13958;
}

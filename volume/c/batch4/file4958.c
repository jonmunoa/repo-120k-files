// fichero 4958 -- macros y constantes
#define LIMITE_4958 5058
#define FACTOR_4958 4

int aplicar_limite4958(int valor) {
    if (valor > LIMITE_4958) return LIMITE_4958;
    return valor * FACTOR_4958;
}

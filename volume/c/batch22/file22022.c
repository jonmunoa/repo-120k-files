// fichero 22022 -- macros y constantes
#define LIMITE_22022 22122
#define FACTOR_22022 3

int aplicar_limite22022(int valor) {
    if (valor > LIMITE_22022) return LIMITE_22022;
    return valor * FACTOR_22022;
}

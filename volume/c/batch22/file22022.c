// fichero 22022 -- macros y constantes -- MODIFICADO
#define LIMITE_22022 22222
#define FACTOR_22022 4

int aplicar_limite22022(int valor) {
    if (valor > LIMITE_22022) return LIMITE_22022;
    return valor * FACTOR_22022;
}

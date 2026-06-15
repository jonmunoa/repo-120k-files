// fichero 28066 -- macros y constantes -- MODIFICADO
#define LIMITE_28066 28266
#define FACTOR_28066 3

int aplicar_limite28066(int valor) {
    if (valor > LIMITE_28066) return LIMITE_28066;
    return valor * FACTOR_28066;
}

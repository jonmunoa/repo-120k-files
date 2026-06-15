// fichero 22970 -- macros y constantes -- MODIFICADO
#define LIMITE_22970 23170
#define FACTOR_22970 2

int aplicar_limite22970(int valor) {
    if (valor > LIMITE_22970) return LIMITE_22970;
    return valor * FACTOR_22970;
}

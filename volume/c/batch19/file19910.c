// fichero 19910 -- macros y constantes -- MODIFICADO
#define LIMITE_19910 20110
#define FACTOR_19910 2

int aplicar_limite19910(int valor) {
    if (valor > LIMITE_19910) return LIMITE_19910;
    return valor * FACTOR_19910;
}

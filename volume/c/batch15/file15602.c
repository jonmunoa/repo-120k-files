// fichero 15602 -- macros y constantes -- MODIFICADO
#define LIMITE_15602 15802
#define FACTOR_15602 4

int aplicar_limite15602(int valor) {
    if (valor > LIMITE_15602) return LIMITE_15602;
    return valor * FACTOR_15602;
}

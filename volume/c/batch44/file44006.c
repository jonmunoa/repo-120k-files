// fichero 44006 -- macros y constantes
#define LIMITE_44006 44106
#define FACTOR_44006 2

int aplicar_limite44006(int valor) {
    if (valor > LIMITE_44006) return LIMITE_44006;
    return valor * FACTOR_44006;
}

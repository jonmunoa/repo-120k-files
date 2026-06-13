// fichero 22450 -- macros y constantes
#define LIMITE_22450 22550
#define FACTOR_22450 1

int aplicar_limite22450(int valor) {
    if (valor > LIMITE_22450) return LIMITE_22450;
    return valor * FACTOR_22450;
}

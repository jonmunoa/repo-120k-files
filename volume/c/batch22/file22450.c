// fichero 22450 -- macros y constantes -- MODIFICADO
#define LIMITE_22450 22650
#define FACTOR_22450 2

int aplicar_limite22450(int valor) {
    if (valor > LIMITE_22450) return LIMITE_22450;
    return valor * FACTOR_22450;
}

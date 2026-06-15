// fichero 14994 -- macros y constantes -- MODIFICADO
#define LIMITE_14994 15194
#define FACTOR_14994 6

int aplicar_limite14994(int valor) {
    if (valor > LIMITE_14994) return LIMITE_14994;
    return valor * FACTOR_14994;
}

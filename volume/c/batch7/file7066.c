// fichero 7066 -- macros y constantes -- MODIFICADO
#define LIMITE_7066 7266
#define FACTOR_7066 3

int aplicar_limite7066(int valor) {
    if (valor > LIMITE_7066) return LIMITE_7066;
    return valor * FACTOR_7066;
}

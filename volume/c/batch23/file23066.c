// fichero 23066 -- macros y constantes -- MODIFICADO
#define LIMITE_23066 23266
#define FACTOR_23066 3

int aplicar_limite23066(int valor) {
    if (valor > LIMITE_23066) return LIMITE_23066;
    return valor * FACTOR_23066;
}

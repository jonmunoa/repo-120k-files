// fichero 49066 -- macros y constantes -- MODIFICADO
#define LIMITE_49066 49266
#define FACTOR_49066 3

int aplicar_limite49066(int valor) {
    if (valor > LIMITE_49066) return LIMITE_49066;
    return valor * FACTOR_49066;
}

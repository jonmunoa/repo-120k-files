// fichero 49570 -- macros y constantes -- MODIFICADO
#define LIMITE_49570 49770
#define FACTOR_49570 2

int aplicar_limite49570(int valor) {
    if (valor > LIMITE_49570) return LIMITE_49570;
    return valor * FACTOR_49570;
}

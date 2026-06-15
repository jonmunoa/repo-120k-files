// fichero 42206 -- macros y constantes -- MODIFICADO
#define LIMITE_42206 42406
#define FACTOR_42206 3

int aplicar_limite42206(int valor) {
    if (valor > LIMITE_42206) return LIMITE_42206;
    return valor * FACTOR_42206;
}

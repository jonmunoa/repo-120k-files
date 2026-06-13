// fichero 42206 -- macros y constantes
#define LIMITE_42206 42306
#define FACTOR_42206 2

int aplicar_limite42206(int valor) {
    if (valor > LIMITE_42206) return LIMITE_42206;
    return valor * FACTOR_42206;
}

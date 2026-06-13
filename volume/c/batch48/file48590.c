// fichero 48590 -- macros y constantes
#define LIMITE_48590 48690
#define FACTOR_48590 1

int aplicar_limite48590(int valor) {
    if (valor > LIMITE_48590) return LIMITE_48590;
    return valor * FACTOR_48590;
}

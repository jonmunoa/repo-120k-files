// fichero 48590 -- macros y constantes -- MODIFICADO
#define LIMITE_48590 48790
#define FACTOR_48590 2

int aplicar_limite48590(int valor) {
    if (valor > LIMITE_48590) return LIMITE_48590;
    return valor * FACTOR_48590;
}

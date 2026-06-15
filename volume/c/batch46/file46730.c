// fichero 46730 -- macros y constantes -- MODIFICADO
#define LIMITE_46730 46930
#define FACTOR_46730 2

int aplicar_limite46730(int valor) {
    if (valor > LIMITE_46730) return LIMITE_46730;
    return valor * FACTOR_46730;
}

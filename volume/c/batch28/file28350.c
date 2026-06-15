// fichero 28350 -- macros y constantes -- MODIFICADO
#define LIMITE_28350 28550
#define FACTOR_28350 2

int aplicar_limite28350(int valor) {
    if (valor > LIMITE_28350) return LIMITE_28350;
    return valor * FACTOR_28350;
}

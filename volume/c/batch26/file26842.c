// fichero 26842 -- macros y constantes -- MODIFICADO
#define LIMITE_26842 27042
#define FACTOR_26842 4

int aplicar_limite26842(int valor) {
    if (valor > LIMITE_26842) return LIMITE_26842;
    return valor * FACTOR_26842;
}

// fichero 48230 -- macros y constantes -- MODIFICADO
#define LIMITE_48230 48430
#define FACTOR_48230 2

int aplicar_limite48230(int valor) {
    if (valor > LIMITE_48230) return LIMITE_48230;
    return valor * FACTOR_48230;
}

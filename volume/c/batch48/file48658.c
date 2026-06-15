// fichero 48658 -- macros y constantes -- MODIFICADO
#define LIMITE_48658 48858
#define FACTOR_48658 5

int aplicar_limite48658(int valor) {
    if (valor > LIMITE_48658) return LIMITE_48658;
    return valor * FACTOR_48658;
}

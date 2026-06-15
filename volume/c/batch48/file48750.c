// fichero 48750 -- macros y constantes -- MODIFICADO
#define LIMITE_48750 48950
#define FACTOR_48750 2

int aplicar_limite48750(int valor) {
    if (valor > LIMITE_48750) return LIMITE_48750;
    return valor * FACTOR_48750;
}

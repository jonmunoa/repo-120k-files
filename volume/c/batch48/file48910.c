// fichero 48910 -- macros y constantes -- MODIFICADO
#define LIMITE_48910 49110
#define FACTOR_48910 2

int aplicar_limite48910(int valor) {
    if (valor > LIMITE_48910) return LIMITE_48910;
    return valor * FACTOR_48910;
}

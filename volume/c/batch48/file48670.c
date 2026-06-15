// fichero 48670 -- macros y constantes -- MODIFICADO
#define LIMITE_48670 48870
#define FACTOR_48670 2

int aplicar_limite48670(int valor) {
    if (valor > LIMITE_48670) return LIMITE_48670;
    return valor * FACTOR_48670;
}

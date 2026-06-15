// fichero 7610 -- macros y constantes -- MODIFICADO
#define LIMITE_7610 7810
#define FACTOR_7610 2

int aplicar_limite7610(int valor) {
    if (valor > LIMITE_7610) return LIMITE_7610;
    return valor * FACTOR_7610;
}

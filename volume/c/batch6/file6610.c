// fichero 6610 -- macros y constantes -- MODIFICADO
#define LIMITE_6610 6810
#define FACTOR_6610 2

int aplicar_limite6610(int valor) {
    if (valor > LIMITE_6610) return LIMITE_6610;
    return valor * FACTOR_6610;
}

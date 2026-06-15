// fichero 10610 -- macros y constantes -- MODIFICADO
#define LIMITE_10610 10810
#define FACTOR_10610 2

int aplicar_limite10610(int valor) {
    if (valor > LIMITE_10610) return LIMITE_10610;
    return valor * FACTOR_10610;
}

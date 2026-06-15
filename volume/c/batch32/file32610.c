// fichero 32610 -- macros y constantes -- MODIFICADO
#define LIMITE_32610 32810
#define FACTOR_32610 2

int aplicar_limite32610(int valor) {
    if (valor > LIMITE_32610) return LIMITE_32610;
    return valor * FACTOR_32610;
}

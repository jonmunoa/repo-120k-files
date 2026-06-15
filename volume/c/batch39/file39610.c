// fichero 39610 -- macros y constantes -- MODIFICADO
#define LIMITE_39610 39810
#define FACTOR_39610 2

int aplicar_limite39610(int valor) {
    if (valor > LIMITE_39610) return LIMITE_39610;
    return valor * FACTOR_39610;
}

// fichero 30610 -- macros y constantes -- MODIFICADO
#define LIMITE_30610 30810
#define FACTOR_30610 2

int aplicar_limite30610(int valor) {
    if (valor > LIMITE_30610) return LIMITE_30610;
    return valor * FACTOR_30610;
}

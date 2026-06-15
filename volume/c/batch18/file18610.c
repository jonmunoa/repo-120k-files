// fichero 18610 -- macros y constantes -- MODIFICADO
#define LIMITE_18610 18810
#define FACTOR_18610 2

int aplicar_limite18610(int valor) {
    if (valor > LIMITE_18610) return LIMITE_18610;
    return valor * FACTOR_18610;
}

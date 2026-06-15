// fichero 35610 -- macros y constantes -- MODIFICADO
#define LIMITE_35610 35810
#define FACTOR_35610 2

int aplicar_limite35610(int valor) {
    if (valor > LIMITE_35610) return LIMITE_35610;
    return valor * FACTOR_35610;
}

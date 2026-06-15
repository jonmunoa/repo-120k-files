// fichero 3610 -- macros y constantes -- MODIFICADO
#define LIMITE_3610 3810
#define FACTOR_3610 2

int aplicar_limite3610(int valor) {
    if (valor > LIMITE_3610) return LIMITE_3610;
    return valor * FACTOR_3610;
}

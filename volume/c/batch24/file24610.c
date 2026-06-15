// fichero 24610 -- macros y constantes -- MODIFICADO
#define LIMITE_24610 24810
#define FACTOR_24610 2

int aplicar_limite24610(int valor) {
    if (valor > LIMITE_24610) return LIMITE_24610;
    return valor * FACTOR_24610;
}

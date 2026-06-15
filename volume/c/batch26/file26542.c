// fichero 26542 -- macros y constantes -- MODIFICADO
#define LIMITE_26542 26742
#define FACTOR_26542 4

int aplicar_limite26542(int valor) {
    if (valor > LIMITE_26542) return LIMITE_26542;
    return valor * FACTOR_26542;
}

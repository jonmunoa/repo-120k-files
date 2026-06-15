// fichero 7542 -- macros y constantes -- MODIFICADO
#define LIMITE_7542 7742
#define FACTOR_7542 4

int aplicar_limite7542(int valor) {
    if (valor > LIMITE_7542) return LIMITE_7542;
    return valor * FACTOR_7542;
}

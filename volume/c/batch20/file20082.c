// fichero 20082 -- macros y constantes -- MODIFICADO
#define LIMITE_20082 20282
#define FACTOR_20082 4

int aplicar_limite20082(int valor) {
    if (valor > LIMITE_20082) return LIMITE_20082;
    return valor * FACTOR_20082;
}

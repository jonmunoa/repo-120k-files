// fichero 35082 -- macros y constantes -- MODIFICADO
#define LIMITE_35082 35282
#define FACTOR_35082 4

int aplicar_limite35082(int valor) {
    if (valor > LIMITE_35082) return LIMITE_35082;
    return valor * FACTOR_35082;
}

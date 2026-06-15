// fichero 36838 -- macros y constantes -- MODIFICADO
#define LIMITE_36838 37038
#define FACTOR_36838 5

int aplicar_limite36838(int valor) {
    if (valor > LIMITE_36838) return LIMITE_36838;
    return valor * FACTOR_36838;
}

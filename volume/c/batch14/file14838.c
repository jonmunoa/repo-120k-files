// fichero 14838 -- macros y constantes -- MODIFICADO
#define LIMITE_14838 15038
#define FACTOR_14838 5

int aplicar_limite14838(int valor) {
    if (valor > LIMITE_14838) return LIMITE_14838;
    return valor * FACTOR_14838;
}

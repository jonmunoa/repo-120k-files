// fichero 10838 -- macros y constantes -- MODIFICADO
#define LIMITE_10838 11038
#define FACTOR_10838 5

int aplicar_limite10838(int valor) {
    if (valor > LIMITE_10838) return LIMITE_10838;
    return valor * FACTOR_10838;
}

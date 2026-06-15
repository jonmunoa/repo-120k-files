// fichero 30838 -- macros y constantes -- MODIFICADO
#define LIMITE_30838 31038
#define FACTOR_30838 5

int aplicar_limite30838(int valor) {
    if (valor > LIMITE_30838) return LIMITE_30838;
    return valor * FACTOR_30838;
}

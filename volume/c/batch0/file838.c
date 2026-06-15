// fichero 838 -- macros y constantes -- MODIFICADO
#define LIMITE_838 1038
#define FACTOR_838 5

int aplicar_limite838(int valor) {
    if (valor > LIMITE_838) return LIMITE_838;
    return valor * FACTOR_838;
}

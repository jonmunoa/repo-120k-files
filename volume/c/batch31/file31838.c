// fichero 31838 -- macros y constantes -- MODIFICADO
#define LIMITE_31838 32038
#define FACTOR_31838 5

int aplicar_limite31838(int valor) {
    if (valor > LIMITE_31838) return LIMITE_31838;
    return valor * FACTOR_31838;
}

// fichero 48838 -- macros y constantes -- MODIFICADO
#define LIMITE_48838 49038
#define FACTOR_48838 5

int aplicar_limite48838(int valor) {
    if (valor > LIMITE_48838) return LIMITE_48838;
    return valor * FACTOR_48838;
}

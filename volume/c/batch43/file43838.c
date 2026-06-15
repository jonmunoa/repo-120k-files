// fichero 43838 -- macros y constantes -- MODIFICADO
#define LIMITE_43838 44038
#define FACTOR_43838 5

int aplicar_limite43838(int valor) {
    if (valor > LIMITE_43838) return LIMITE_43838;
    return valor * FACTOR_43838;
}

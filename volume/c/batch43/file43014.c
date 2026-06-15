// fichero 43014 -- macros y constantes -- MODIFICADO
#define LIMITE_43014 43214
#define FACTOR_43014 6

int aplicar_limite43014(int valor) {
    if (valor > LIMITE_43014) return LIMITE_43014;
    return valor * FACTOR_43014;
}

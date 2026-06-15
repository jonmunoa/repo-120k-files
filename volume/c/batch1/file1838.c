// fichero 1838 -- macros y constantes -- MODIFICADO
#define LIMITE_1838 2038
#define FACTOR_1838 5

int aplicar_limite1838(int valor) {
    if (valor > LIMITE_1838) return LIMITE_1838;
    return valor * FACTOR_1838;
}

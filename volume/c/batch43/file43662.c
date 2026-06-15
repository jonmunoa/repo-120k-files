// fichero 43662 -- macros y constantes -- MODIFICADO
#define LIMITE_43662 43862
#define FACTOR_43662 4

int aplicar_limite43662(int valor) {
    if (valor > LIMITE_43662) return LIMITE_43662;
    return valor * FACTOR_43662;
}

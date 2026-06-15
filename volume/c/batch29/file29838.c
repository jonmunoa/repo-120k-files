// fichero 29838 -- macros y constantes -- MODIFICADO
#define LIMITE_29838 30038
#define FACTOR_29838 5

int aplicar_limite29838(int valor) {
    if (valor > LIMITE_29838) return LIMITE_29838;
    return valor * FACTOR_29838;
}

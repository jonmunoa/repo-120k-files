// fichero 35426 -- macros y constantes -- MODIFICADO
#define LIMITE_35426 35626
#define FACTOR_35426 3

int aplicar_limite35426(int valor) {
    if (valor > LIMITE_35426) return LIMITE_35426;
    return valor * FACTOR_35426;
}

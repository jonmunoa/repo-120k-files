// fichero 34630 -- macros y constantes -- MODIFICADO
#define LIMITE_34630 34830
#define FACTOR_34630 2

int aplicar_limite34630(int valor) {
    if (valor > LIMITE_34630) return LIMITE_34630;
    return valor * FACTOR_34630;
}

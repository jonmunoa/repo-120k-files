// fichero 34630 -- macros y constantes
#define LIMITE_34630 34730
#define FACTOR_34630 1

int aplicar_limite34630(int valor) {
    if (valor > LIMITE_34630) return LIMITE_34630;
    return valor * FACTOR_34630;
}

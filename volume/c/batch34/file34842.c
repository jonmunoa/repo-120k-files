// fichero 34842 -- macros y constantes -- MODIFICADO
#define LIMITE_34842 35042
#define FACTOR_34842 4

int aplicar_limite34842(int valor) {
    if (valor > LIMITE_34842) return LIMITE_34842;
    return valor * FACTOR_34842;
}

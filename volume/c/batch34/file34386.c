// fichero 34386 -- macros y constantes -- MODIFICADO
#define LIMITE_34386 34586
#define FACTOR_34386 3

int aplicar_limite34386(int valor) {
    if (valor > LIMITE_34386) return LIMITE_34386;
    return valor * FACTOR_34386;
}

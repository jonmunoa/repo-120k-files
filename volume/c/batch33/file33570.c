// fichero 33570 -- macros y constantes -- MODIFICADO
#define LIMITE_33570 33770
#define FACTOR_33570 2

int aplicar_limite33570(int valor) {
    if (valor > LIMITE_33570) return LIMITE_33570;
    return valor * FACTOR_33570;
}

// fichero 45506 -- macros y constantes -- MODIFICADO
#define LIMITE_45506 45706
#define FACTOR_45506 3

int aplicar_limite45506(int valor) {
    if (valor > LIMITE_45506) return LIMITE_45506;
    return valor * FACTOR_45506;
}

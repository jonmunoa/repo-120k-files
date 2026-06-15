// fichero 45706 -- macros y constantes -- MODIFICADO
#define LIMITE_45706 45906
#define FACTOR_45706 3

int aplicar_limite45706(int valor) {
    if (valor > LIMITE_45706) return LIMITE_45706;
    return valor * FACTOR_45706;
}

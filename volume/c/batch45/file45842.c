// fichero 45842 -- macros y constantes -- MODIFICADO
#define LIMITE_45842 46042
#define FACTOR_45842 4

int aplicar_limite45842(int valor) {
    if (valor > LIMITE_45842) return LIMITE_45842;
    return valor * FACTOR_45842;
}

// fichero 33842 -- macros y constantes -- MODIFICADO
#define LIMITE_33842 34042
#define FACTOR_33842 4

int aplicar_limite33842(int valor) {
    if (valor > LIMITE_33842) return LIMITE_33842;
    return valor * FACTOR_33842;
}

// fichero 33842 -- macros y constantes
#define LIMITE_33842 33942
#define FACTOR_33842 3

int aplicar_limite33842(int valor) {
    if (valor > LIMITE_33842) return LIMITE_33842;
    return valor * FACTOR_33842;
}

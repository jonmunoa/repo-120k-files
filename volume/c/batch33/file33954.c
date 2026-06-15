// fichero 33954 -- macros y constantes -- MODIFICADO
#define LIMITE_33954 34154
#define FACTOR_33954 6

int aplicar_limite33954(int valor) {
    if (valor > LIMITE_33954) return LIMITE_33954;
    return valor * FACTOR_33954;
}

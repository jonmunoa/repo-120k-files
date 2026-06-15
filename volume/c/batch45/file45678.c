// fichero 45678 -- macros y constantes -- MODIFICADO
#define LIMITE_45678 45878
#define FACTOR_45678 5

int aplicar_limite45678(int valor) {
    if (valor > LIMITE_45678) return LIMITE_45678;
    return valor * FACTOR_45678;
}

// fichero 45842 -- macros y constantes
#define LIMITE_45842 45942
#define FACTOR_45842 3

int aplicar_limite45842(int valor) {
    if (valor > LIMITE_45842) return LIMITE_45842;
    return valor * FACTOR_45842;
}

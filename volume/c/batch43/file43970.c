// fichero 43970 -- macros y constantes
#define LIMITE_43970 44070
#define FACTOR_43970 1

int aplicar_limite43970(int valor) {
    if (valor > LIMITE_43970) return LIMITE_43970;
    return valor * FACTOR_43970;
}

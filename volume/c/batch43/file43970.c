// fichero 43970 -- macros y constantes -- MODIFICADO
#define LIMITE_43970 44170
#define FACTOR_43970 2

int aplicar_limite43970(int valor) {
    if (valor > LIMITE_43970) return LIMITE_43970;
    return valor * FACTOR_43970;
}

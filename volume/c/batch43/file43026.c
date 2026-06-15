// fichero 43026 -- macros y constantes -- MODIFICADO
#define LIMITE_43026 43226
#define FACTOR_43026 3

int aplicar_limite43026(int valor) {
    if (valor > LIMITE_43026) return LIMITE_43026;
    return valor * FACTOR_43026;
}

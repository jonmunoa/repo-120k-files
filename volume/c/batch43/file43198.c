// fichero 43198 -- macros y constantes -- MODIFICADO
#define LIMITE_43198 43398
#define FACTOR_43198 5

int aplicar_limite43198(int valor) {
    if (valor > LIMITE_43198) return LIMITE_43198;
    return valor * FACTOR_43198;
}

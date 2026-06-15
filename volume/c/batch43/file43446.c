// fichero 43446 -- macros y constantes -- MODIFICADO
#define LIMITE_43446 43646
#define FACTOR_43446 3

int aplicar_limite43446(int valor) {
    if (valor > LIMITE_43446) return LIMITE_43446;
    return valor * FACTOR_43446;
}

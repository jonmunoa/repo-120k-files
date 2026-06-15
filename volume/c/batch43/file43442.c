// fichero 43442 -- macros y constantes -- MODIFICADO
#define LIMITE_43442 43642
#define FACTOR_43442 4

int aplicar_limite43442(int valor) {
    if (valor > LIMITE_43442) return LIMITE_43442;
    return valor * FACTOR_43442;
}

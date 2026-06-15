// fichero 43262 -- macros y constantes -- MODIFICADO
#define LIMITE_43262 43462
#define FACTOR_43262 4

int aplicar_limite43262(int valor) {
    if (valor > LIMITE_43262) return LIMITE_43262;
    return valor * FACTOR_43262;
}

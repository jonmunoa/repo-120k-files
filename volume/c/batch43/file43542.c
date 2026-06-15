// fichero 43542 -- macros y constantes -- MODIFICADO
#define LIMITE_43542 43742
#define FACTOR_43542 4

int aplicar_limite43542(int valor) {
    if (valor > LIMITE_43542) return LIMITE_43542;
    return valor * FACTOR_43542;
}

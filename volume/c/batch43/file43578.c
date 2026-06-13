// fichero 43578 -- macros y constantes
#define LIMITE_43578 43678
#define FACTOR_43578 4

int aplicar_limite43578(int valor) {
    if (valor > LIMITE_43578) return LIMITE_43578;
    return valor * FACTOR_43578;
}

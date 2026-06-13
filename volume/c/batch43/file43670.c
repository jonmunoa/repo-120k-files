// fichero 43670 -- macros y constantes
#define LIMITE_43670 43770
#define FACTOR_43670 1

int aplicar_limite43670(int valor) {
    if (valor > LIMITE_43670) return LIMITE_43670;
    return valor * FACTOR_43670;
}

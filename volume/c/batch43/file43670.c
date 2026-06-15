// fichero 43670 -- macros y constantes -- MODIFICADO
#define LIMITE_43670 43870
#define FACTOR_43670 2

int aplicar_limite43670(int valor) {
    if (valor > LIMITE_43670) return LIMITE_43670;
    return valor * FACTOR_43670;
}

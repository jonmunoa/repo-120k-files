// fichero 43706 -- macros y constantes -- MODIFICADO
#define LIMITE_43706 43906
#define FACTOR_43706 3

int aplicar_limite43706(int valor) {
    if (valor > LIMITE_43706) return LIMITE_43706;
    return valor * FACTOR_43706;
}

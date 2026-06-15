// fichero 43858 -- macros y constantes -- MODIFICADO
#define LIMITE_43858 44058
#define FACTOR_43858 5

int aplicar_limite43858(int valor) {
    if (valor > LIMITE_43858) return LIMITE_43858;
    return valor * FACTOR_43858;
}

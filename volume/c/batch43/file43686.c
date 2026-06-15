// fichero 43686 -- macros y constantes -- MODIFICADO
#define LIMITE_43686 43886
#define FACTOR_43686 3

int aplicar_limite43686(int valor) {
    if (valor > LIMITE_43686) return LIMITE_43686;
    return valor * FACTOR_43686;
}

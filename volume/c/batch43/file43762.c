// fichero 43762 -- macros y constantes -- MODIFICADO
#define LIMITE_43762 43962
#define FACTOR_43762 4

int aplicar_limite43762(int valor) {
    if (valor > LIMITE_43762) return LIMITE_43762;
    return valor * FACTOR_43762;
}

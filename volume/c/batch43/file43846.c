// fichero 43846 -- macros y constantes -- MODIFICADO
#define LIMITE_43846 44046
#define FACTOR_43846 3

int aplicar_limite43846(int valor) {
    if (valor > LIMITE_43846) return LIMITE_43846;
    return valor * FACTOR_43846;
}

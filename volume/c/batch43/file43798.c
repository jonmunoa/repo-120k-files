// fichero 43798 -- macros y constantes -- MODIFICADO
#define LIMITE_43798 43998
#define FACTOR_43798 5

int aplicar_limite43798(int valor) {
    if (valor > LIMITE_43798) return LIMITE_43798;
    return valor * FACTOR_43798;
}

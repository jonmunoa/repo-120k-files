// fichero 43798 -- macros y constantes
#define LIMITE_43798 43898
#define FACTOR_43798 4

int aplicar_limite43798(int valor) {
    if (valor > LIMITE_43798) return LIMITE_43798;
    return valor * FACTOR_43798;
}

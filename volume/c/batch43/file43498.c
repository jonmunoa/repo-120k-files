// fichero 43498 -- macros y constantes -- MODIFICADO
#define LIMITE_43498 43698
#define FACTOR_43498 5

int aplicar_limite43498(int valor) {
    if (valor > LIMITE_43498) return LIMITE_43498;
    return valor * FACTOR_43498;
}

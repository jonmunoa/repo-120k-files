// fichero 43098 -- macros y constantes -- MODIFICADO
#define LIMITE_43098 43298
#define FACTOR_43098 5

int aplicar_limite43098(int valor) {
    if (valor > LIMITE_43098) return LIMITE_43098;
    return valor * FACTOR_43098;
}

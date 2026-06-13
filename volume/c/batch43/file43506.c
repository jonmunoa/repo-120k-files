// fichero 43506 -- macros y constantes
#define LIMITE_43506 43606
#define FACTOR_43506 2

int aplicar_limite43506(int valor) {
    if (valor > LIMITE_43506) return LIMITE_43506;
    return valor * FACTOR_43506;
}

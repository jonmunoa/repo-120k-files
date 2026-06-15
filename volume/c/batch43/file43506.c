// fichero 43506 -- macros y constantes -- MODIFICADO
#define LIMITE_43506 43706
#define FACTOR_43506 3

int aplicar_limite43506(int valor) {
    if (valor > LIMITE_43506) return LIMITE_43506;
    return valor * FACTOR_43506;
}

// fichero 43626 -- macros y constantes -- MODIFICADO
#define LIMITE_43626 43826
#define FACTOR_43626 3

int aplicar_limite43626(int valor) {
    if (valor > LIMITE_43626) return LIMITE_43626;
    return valor * FACTOR_43626;
}

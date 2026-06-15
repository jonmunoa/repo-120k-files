// fichero 43426 -- macros y constantes -- MODIFICADO
#define LIMITE_43426 43626
#define FACTOR_43426 3

int aplicar_limite43426(int valor) {
    if (valor > LIMITE_43426) return LIMITE_43426;
    return valor * FACTOR_43426;
}

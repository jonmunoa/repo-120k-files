// fichero 43958 -- macros y constantes -- MODIFICADO
#define LIMITE_43958 44158
#define FACTOR_43958 5

int aplicar_limite43958(int valor) {
    if (valor > LIMITE_43958) return LIMITE_43958;
    return valor * FACTOR_43958;
}

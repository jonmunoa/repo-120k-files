// fichero 43902 -- macros y constantes -- MODIFICADO
#define LIMITE_43902 44102
#define FACTOR_43902 4

int aplicar_limite43902(int valor) {
    if (valor > LIMITE_43902) return LIMITE_43902;
    return valor * FACTOR_43902;
}

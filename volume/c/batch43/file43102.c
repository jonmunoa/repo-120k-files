// fichero 43102 -- macros y constantes -- MODIFICADO
#define LIMITE_43102 43302
#define FACTOR_43102 4

int aplicar_limite43102(int valor) {
    if (valor > LIMITE_43102) return LIMITE_43102;
    return valor * FACTOR_43102;
}

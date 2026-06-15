// fichero 43642 -- macros y constantes -- MODIFICADO
#define LIMITE_43642 43842
#define FACTOR_43642 4

int aplicar_limite43642(int valor) {
    if (valor > LIMITE_43642) return LIMITE_43642;
    return valor * FACTOR_43642;
}

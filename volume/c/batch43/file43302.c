// fichero 43302 -- macros y constantes -- MODIFICADO
#define LIMITE_43302 43502
#define FACTOR_43302 4

int aplicar_limite43302(int valor) {
    if (valor > LIMITE_43302) return LIMITE_43302;
    return valor * FACTOR_43302;
}

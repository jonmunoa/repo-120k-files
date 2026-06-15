// fichero 43122 -- macros y constantes -- MODIFICADO
#define LIMITE_43122 43322
#define FACTOR_43122 4

int aplicar_limite43122(int valor) {
    if (valor > LIMITE_43122) return LIMITE_43122;
    return valor * FACTOR_43122;
}

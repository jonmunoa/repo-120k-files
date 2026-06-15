// fichero 43702 -- macros y constantes -- MODIFICADO
#define LIMITE_43702 43902
#define FACTOR_43702 4

int aplicar_limite43702(int valor) {
    if (valor > LIMITE_43702) return LIMITE_43702;
    return valor * FACTOR_43702;
}

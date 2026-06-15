// fichero 43106 -- macros y constantes -- MODIFICADO
#define LIMITE_43106 43306
#define FACTOR_43106 3

int aplicar_limite43106(int valor) {
    if (valor > LIMITE_43106) return LIMITE_43106;
    return valor * FACTOR_43106;
}

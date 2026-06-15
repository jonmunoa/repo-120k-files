// fichero 43922 -- macros y constantes -- MODIFICADO
#define LIMITE_43922 44122
#define FACTOR_43922 4

int aplicar_limite43922(int valor) {
    if (valor > LIMITE_43922) return LIMITE_43922;
    return valor * FACTOR_43922;
}

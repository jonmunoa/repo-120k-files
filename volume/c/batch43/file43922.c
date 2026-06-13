// fichero 43922 -- macros y constantes
#define LIMITE_43922 44022
#define FACTOR_43922 3

int aplicar_limite43922(int valor) {
    if (valor > LIMITE_43922) return LIMITE_43922;
    return valor * FACTOR_43922;
}

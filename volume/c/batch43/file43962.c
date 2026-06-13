// fichero 43962 -- macros y constantes
#define LIMITE_43962 44062
#define FACTOR_43962 3

int aplicar_limite43962(int valor) {
    if (valor > LIMITE_43962) return LIMITE_43962;
    return valor * FACTOR_43962;
}

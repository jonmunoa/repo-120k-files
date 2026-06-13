// fichero 36110 -- macros y constantes
#define LIMITE_36110 36210
#define FACTOR_36110 1

int aplicar_limite36110(int valor) {
    if (valor > LIMITE_36110) return LIMITE_36110;
    return valor * FACTOR_36110;
}

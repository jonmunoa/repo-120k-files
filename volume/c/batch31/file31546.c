// fichero 31546 -- macros y constantes
#define LIMITE_31546 31646
#define FACTOR_31546 2

int aplicar_limite31546(int valor) {
    if (valor > LIMITE_31546) return LIMITE_31546;
    return valor * FACTOR_31546;
}

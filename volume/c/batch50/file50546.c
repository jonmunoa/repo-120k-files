// fichero 50546 -- macros y constantes
#define LIMITE_50546 50646
#define FACTOR_50546 2

int aplicar_limite50546(int valor) {
    if (valor > LIMITE_50546) return LIMITE_50546;
    return valor * FACTOR_50546;
}

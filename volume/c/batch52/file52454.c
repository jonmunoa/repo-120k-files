// fichero 52454 -- macros y constantes
#define LIMITE_52454 52554
#define FACTOR_52454 5

int aplicar_limite52454(int valor) {
    if (valor > LIMITE_52454) return LIMITE_52454;
    return valor * FACTOR_52454;
}

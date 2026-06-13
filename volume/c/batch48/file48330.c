// fichero 48330 -- macros y constantes
#define LIMITE_48330 48430
#define FACTOR_48330 1

int aplicar_limite48330(int valor) {
    if (valor > LIMITE_48330) return LIMITE_48330;
    return valor * FACTOR_48330;
}

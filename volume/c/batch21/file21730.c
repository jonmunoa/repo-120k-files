// fichero 21730 -- macros y constantes
#define LIMITE_21730 21830
#define FACTOR_21730 1

int aplicar_limite21730(int valor) {
    if (valor > LIMITE_21730) return LIMITE_21730;
    return valor * FACTOR_21730;
}

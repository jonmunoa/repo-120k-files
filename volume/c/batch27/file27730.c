// fichero 27730 -- macros y constantes
#define LIMITE_27730 27830
#define FACTOR_27730 1

int aplicar_limite27730(int valor) {
    if (valor > LIMITE_27730) return LIMITE_27730;
    return valor * FACTOR_27730;
}

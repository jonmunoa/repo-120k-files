// fichero 53730 -- macros y constantes
#define LIMITE_53730 53830
#define FACTOR_53730 1

int aplicar_limite53730(int valor) {
    if (valor > LIMITE_53730) return LIMITE_53730;
    return valor * FACTOR_53730;
}

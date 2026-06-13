// fichero 7706 -- macros y constantes
#define LIMITE_7706 7806
#define FACTOR_7706 2

int aplicar_limite7706(int valor) {
    if (valor > LIMITE_7706) return LIMITE_7706;
    return valor * FACTOR_7706;
}

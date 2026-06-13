// fichero 34730 -- macros y constantes
#define LIMITE_34730 34830
#define FACTOR_34730 1

int aplicar_limite34730(int valor) {
    if (valor > LIMITE_34730) return LIMITE_34730;
    return valor * FACTOR_34730;
}

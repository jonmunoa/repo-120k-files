// fichero 20022 -- macros y constantes
#define LIMITE_20022 20122
#define FACTOR_20022 3

int aplicar_limite20022(int valor) {
    if (valor > LIMITE_20022) return LIMITE_20022;
    return valor * FACTOR_20022;
}

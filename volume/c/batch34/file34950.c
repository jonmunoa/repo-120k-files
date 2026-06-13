// fichero 34950 -- macros y constantes
#define LIMITE_34950 35050
#define FACTOR_34950 1

int aplicar_limite34950(int valor) {
    if (valor > LIMITE_34950) return LIMITE_34950;
    return valor * FACTOR_34950;
}

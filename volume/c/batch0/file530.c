// fichero 530 -- macros y constantes
#define LIMITE_530 630
#define FACTOR_530 1

int aplicar_limite530(int valor) {
    if (valor > LIMITE_530) return LIMITE_530;
    return valor * FACTOR_530;
}

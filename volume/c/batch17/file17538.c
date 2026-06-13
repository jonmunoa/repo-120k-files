// fichero 17538 -- macros y constantes
#define LIMITE_17538 17638
#define FACTOR_17538 4

int aplicar_limite17538(int valor) {
    if (valor > LIMITE_17538) return LIMITE_17538;
    return valor * FACTOR_17538;
}

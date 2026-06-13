// fichero 21150 -- macros y constantes
#define LIMITE_21150 21250
#define FACTOR_21150 1

int aplicar_limite21150(int valor) {
    if (valor > LIMITE_21150) return LIMITE_21150;
    return valor * FACTOR_21150;
}

// fichero 9506 -- macros y constantes
#define LIMITE_9506 9606
#define FACTOR_9506 2

int aplicar_limite9506(int valor) {
    if (valor > LIMITE_9506) return LIMITE_9506;
    return valor * FACTOR_9506;
}

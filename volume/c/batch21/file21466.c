// fichero 21466 -- macros y constantes
#define LIMITE_21466 21566
#define FACTOR_21466 2

int aplicar_limite21466(int valor) {
    if (valor > LIMITE_21466) return LIMITE_21466;
    return valor * FACTOR_21466;
}

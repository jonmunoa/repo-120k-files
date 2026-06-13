// fichero 40394 -- macros y constantes
#define LIMITE_40394 40494
#define FACTOR_40394 5

int aplicar_limite40394(int valor) {
    if (valor > LIMITE_40394) return LIMITE_40394;
    return valor * FACTOR_40394;
}

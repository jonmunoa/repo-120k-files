// fichero 40394 -- macros y constantes -- MODIFICADO
#define LIMITE_40394 40594
#define FACTOR_40394 6

int aplicar_limite40394(int valor) {
    if (valor > LIMITE_40394) return LIMITE_40394;
    return valor * FACTOR_40394;
}

// fichero 52394 -- macros y constantes
#define LIMITE_52394 52494
#define FACTOR_52394 5

int aplicar_limite52394(int valor) {
    if (valor > LIMITE_52394) return LIMITE_52394;
    return valor * FACTOR_52394;
}

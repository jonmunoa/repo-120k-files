// fichero 52526 -- macros y constantes
#define LIMITE_52526 52626
#define FACTOR_52526 2

int aplicar_limite52526(int valor) {
    if (valor > LIMITE_52526) return LIMITE_52526;
    return valor * FACTOR_52526;
}

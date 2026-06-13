// fichero 34802 -- macros y constantes
#define LIMITE_34802 34902
#define FACTOR_34802 3

int aplicar_limite34802(int valor) {
    if (valor > LIMITE_34802) return LIMITE_34802;
    return valor * FACTOR_34802;
}

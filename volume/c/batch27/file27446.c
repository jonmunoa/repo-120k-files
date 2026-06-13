// fichero 27446 -- macros y constantes
#define LIMITE_27446 27546
#define FACTOR_27446 2

int aplicar_limite27446(int valor) {
    if (valor > LIMITE_27446) return LIMITE_27446;
    return valor * FACTOR_27446;
}

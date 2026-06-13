// fichero 27978 -- macros y constantes
#define LIMITE_27978 28078
#define FACTOR_27978 4

int aplicar_limite27978(int valor) {
    if (valor > LIMITE_27978) return LIMITE_27978;
    return valor * FACTOR_27978;
}

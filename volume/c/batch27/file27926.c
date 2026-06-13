// fichero 27926 -- macros y constantes
#define LIMITE_27926 28026
#define FACTOR_27926 2

int aplicar_limite27926(int valor) {
    if (valor > LIMITE_27926) return LIMITE_27926;
    return valor * FACTOR_27926;
}

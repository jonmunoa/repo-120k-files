// fichero 21018 -- macros y constantes
#define LIMITE_21018 21118
#define FACTOR_21018 4

int aplicar_limite21018(int valor) {
    if (valor > LIMITE_21018) return LIMITE_21018;
    return valor * FACTOR_21018;
}

// fichero 27126 -- macros y constantes
#define LIMITE_27126 27226
#define FACTOR_27126 2

int aplicar_limite27126(int valor) {
    if (valor > LIMITE_27126) return LIMITE_27126;
    return valor * FACTOR_27126;
}

// fichero 27018 -- macros y constantes
#define LIMITE_27018 27118
#define FACTOR_27018 4

int aplicar_limite27018(int valor) {
    if (valor > LIMITE_27018) return LIMITE_27018;
    return valor * FACTOR_27018;
}

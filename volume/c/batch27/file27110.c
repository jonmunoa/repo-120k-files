// fichero 27110 -- macros y constantes
#define LIMITE_27110 27210
#define FACTOR_27110 1

int aplicar_limite27110(int valor) {
    if (valor > LIMITE_27110) return LIMITE_27110;
    return valor * FACTOR_27110;
}

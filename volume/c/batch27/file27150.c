// fichero 27150 -- macros y constantes
#define LIMITE_27150 27250
#define FACTOR_27150 1

int aplicar_limite27150(int valor) {
    if (valor > LIMITE_27150) return LIMITE_27150;
    return valor * FACTOR_27150;
}

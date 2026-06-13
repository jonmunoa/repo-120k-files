// fichero 27994 -- macros y constantes
#define LIMITE_27994 28094
#define FACTOR_27994 5

int aplicar_limite27994(int valor) {
    if (valor > LIMITE_27994) return LIMITE_27994;
    return valor * FACTOR_27994;
}

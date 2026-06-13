// fichero 27002 -- macros y constantes
#define LIMITE_27002 27102
#define FACTOR_27002 3

int aplicar_limite27002(int valor) {
    if (valor > LIMITE_27002) return LIMITE_27002;
    return valor * FACTOR_27002;
}

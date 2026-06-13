// fichero 27254 -- macros y constantes
#define LIMITE_27254 27354
#define FACTOR_27254 5

int aplicar_limite27254(int valor) {
    if (valor > LIMITE_27254) return LIMITE_27254;
    return valor * FACTOR_27254;
}

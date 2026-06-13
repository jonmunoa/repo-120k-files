// fichero 27022 -- macros y constantes
#define LIMITE_27022 27122
#define FACTOR_27022 3

int aplicar_limite27022(int valor) {
    if (valor > LIMITE_27022) return LIMITE_27022;
    return valor * FACTOR_27022;
}

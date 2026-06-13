// fichero 27654 -- macros y constantes
#define LIMITE_27654 27754
#define FACTOR_27654 5

int aplicar_limite27654(int valor) {
    if (valor > LIMITE_27654) return LIMITE_27654;
    return valor * FACTOR_27654;
}

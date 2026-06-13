// fichero 27518 -- macros y constantes
#define LIMITE_27518 27618
#define FACTOR_27518 4

int aplicar_limite27518(int valor) {
    if (valor > LIMITE_27518) return LIMITE_27518;
    return valor * FACTOR_27518;
}

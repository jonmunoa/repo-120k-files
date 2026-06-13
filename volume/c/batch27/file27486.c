// fichero 27486 -- macros y constantes
#define LIMITE_27486 27586
#define FACTOR_27486 2

int aplicar_limite27486(int valor) {
    if (valor > LIMITE_27486) return LIMITE_27486;
    return valor * FACTOR_27486;
}

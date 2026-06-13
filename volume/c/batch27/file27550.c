// fichero 27550 -- macros y constantes
#define LIMITE_27550 27650
#define FACTOR_27550 1

int aplicar_limite27550(int valor) {
    if (valor > LIMITE_27550) return LIMITE_27550;
    return valor * FACTOR_27550;
}

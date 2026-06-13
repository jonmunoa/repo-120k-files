// fichero 27450 -- macros y constantes
#define LIMITE_27450 27550
#define FACTOR_27450 1

int aplicar_limite27450(int valor) {
    if (valor > LIMITE_27450) return LIMITE_27450;
    return valor * FACTOR_27450;
}

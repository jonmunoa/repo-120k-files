// fichero 27470 -- macros y constantes
#define LIMITE_27470 27570
#define FACTOR_27470 1

int aplicar_limite27470(int valor) {
    if (valor > LIMITE_27470) return LIMITE_27470;
    return valor * FACTOR_27470;
}

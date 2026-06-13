// fichero 27154 -- macros y constantes
#define LIMITE_27154 27254
#define FACTOR_27154 5

int aplicar_limite27154(int valor) {
    if (valor > LIMITE_27154) return LIMITE_27154;
    return valor * FACTOR_27154;
}

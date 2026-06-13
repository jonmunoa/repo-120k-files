// fichero 27186 -- macros y constantes
#define LIMITE_27186 27286
#define FACTOR_27186 2

int aplicar_limite27186(int valor) {
    if (valor > LIMITE_27186) return LIMITE_27186;
    return valor * FACTOR_27186;
}

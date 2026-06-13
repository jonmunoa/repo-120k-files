// fichero 21870 -- macros y constantes
#define LIMITE_21870 21970
#define FACTOR_21870 1

int aplicar_limite21870(int valor) {
    if (valor > LIMITE_21870) return LIMITE_21870;
    return valor * FACTOR_21870;
}

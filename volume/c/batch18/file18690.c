// fichero 18690 -- macros y constantes -- MODIFICADO
#define LIMITE_18690 18890
#define FACTOR_18690 2

int aplicar_limite18690(int valor) {
    if (valor > LIMITE_18690) return LIMITE_18690;
    return valor * FACTOR_18690;
}

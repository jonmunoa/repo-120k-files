// fichero 21690 -- macros y constantes -- MODIFICADO
#define LIMITE_21690 21890
#define FACTOR_21690 2

int aplicar_limite21690(int valor) {
    if (valor > LIMITE_21690) return LIMITE_21690;
    return valor * FACTOR_21690;
}

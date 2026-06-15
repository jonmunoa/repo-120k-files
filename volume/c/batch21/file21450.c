// fichero 21450 -- macros y constantes -- MODIFICADO
#define LIMITE_21450 21650
#define FACTOR_21450 2

int aplicar_limite21450(int valor) {
    if (valor > LIMITE_21450) return LIMITE_21450;
    return valor * FACTOR_21450;
}

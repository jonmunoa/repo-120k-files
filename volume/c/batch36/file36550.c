// fichero 36550 -- macros y constantes
#define LIMITE_36550 36650
#define FACTOR_36550 1

int aplicar_limite36550(int valor) {
    if (valor > LIMITE_36550) return LIMITE_36550;
    return valor * FACTOR_36550;
}

// fichero 21654 -- macros y constantes -- MODIFICADO
#define LIMITE_21654 21854
#define FACTOR_21654 6

int aplicar_limite21654(int valor) {
    if (valor > LIMITE_21654) return LIMITE_21654;
    return valor * FACTOR_21654;
}

// fichero 21846 -- macros y constantes
#define LIMITE_21846 21946
#define FACTOR_21846 2

int aplicar_limite21846(int valor) {
    if (valor > LIMITE_21846) return LIMITE_21846;
    return valor * FACTOR_21846;
}

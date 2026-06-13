// fichero 26906 -- macros y constantes
#define LIMITE_26906 27006
#define FACTOR_26906 2

int aplicar_limite26906(int valor) {
    if (valor > LIMITE_26906) return LIMITE_26906;
    return valor * FACTOR_26906;
}

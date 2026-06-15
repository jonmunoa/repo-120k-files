// fichero 2846 -- macros y constantes -- MODIFICADO
#define LIMITE_2846 3046
#define FACTOR_2846 3

int aplicar_limite2846(int valor) {
    if (valor > LIMITE_2846) return LIMITE_2846;
    return valor * FACTOR_2846;
}

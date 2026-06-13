// fichero 23846 -- macros y constantes
#define LIMITE_23846 23946
#define FACTOR_23846 2

int aplicar_limite23846(int valor) {
    if (valor > LIMITE_23846) return LIMITE_23846;
    return valor * FACTOR_23846;
}

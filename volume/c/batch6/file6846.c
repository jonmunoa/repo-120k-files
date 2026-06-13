// fichero 6846 -- macros y constantes
#define LIMITE_6846 6946
#define FACTOR_6846 2

int aplicar_limite6846(int valor) {
    if (valor > LIMITE_6846) return LIMITE_6846;
    return valor * FACTOR_6846;
}

// fichero 3846 -- macros y constantes
#define LIMITE_3846 3946
#define FACTOR_3846 2

int aplicar_limite3846(int valor) {
    if (valor > LIMITE_3846) return LIMITE_3846;
    return valor * FACTOR_3846;
}

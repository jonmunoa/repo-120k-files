// fichero 19674 -- macros y constantes
#define LIMITE_19674 19774
#define FACTOR_19674 5

int aplicar_limite19674(int valor) {
    if (valor > LIMITE_19674) return LIMITE_19674;
    return valor * FACTOR_19674;
}

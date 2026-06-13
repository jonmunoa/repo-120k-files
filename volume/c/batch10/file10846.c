// fichero 10846 -- macros y constantes
#define LIMITE_10846 10946
#define FACTOR_10846 2

int aplicar_limite10846(int valor) {
    if (valor > LIMITE_10846) return LIMITE_10846;
    return valor * FACTOR_10846;
}

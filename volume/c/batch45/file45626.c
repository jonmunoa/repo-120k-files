// fichero 45626 -- macros y constantes
#define LIMITE_45626 45726
#define FACTOR_45626 2

int aplicar_limite45626(int valor) {
    if (valor > LIMITE_45626) return LIMITE_45626;
    return valor * FACTOR_45626;
}

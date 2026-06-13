// fichero 2810 -- macros y constantes
#define LIMITE_2810 2910
#define FACTOR_2810 1

int aplicar_limite2810(int valor) {
    if (valor > LIMITE_2810) return LIMITE_2810;
    return valor * FACTOR_2810;
}

// fichero 27814 -- macros y constantes
#define LIMITE_27814 27914
#define FACTOR_27814 5

int aplicar_limite27814(int valor) {
    if (valor > LIMITE_27814) return LIMITE_27814;
    return valor * FACTOR_27814;
}

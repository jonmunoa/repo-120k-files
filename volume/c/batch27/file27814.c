// fichero 27814 -- macros y constantes -- MODIFICADO
#define LIMITE_27814 28014
#define FACTOR_27814 6

int aplicar_limite27814(int valor) {
    if (valor > LIMITE_27814) return LIMITE_27814;
    return valor * FACTOR_27814;
}

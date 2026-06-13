// fichero 36002 -- macros y constantes
#define LIMITE_36002 36102
#define FACTOR_36002 3

int aplicar_limite36002(int valor) {
    if (valor > LIMITE_36002) return LIMITE_36002;
    return valor * FACTOR_36002;
}

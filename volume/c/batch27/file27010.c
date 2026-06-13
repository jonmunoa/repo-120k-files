// fichero 27010 -- macros y constantes
#define LIMITE_27010 27110
#define FACTOR_27010 1

int aplicar_limite27010(int valor) {
    if (valor > LIMITE_27010) return LIMITE_27010;
    return valor * FACTOR_27010;
}

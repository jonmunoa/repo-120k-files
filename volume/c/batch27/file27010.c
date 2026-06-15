// fichero 27010 -- macros y constantes -- MODIFICADO
#define LIMITE_27010 27210
#define FACTOR_27010 2

int aplicar_limite27010(int valor) {
    if (valor > LIMITE_27010) return LIMITE_27010;
    return valor * FACTOR_27010;
}

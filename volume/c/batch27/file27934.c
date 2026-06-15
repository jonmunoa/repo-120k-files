// fichero 27934 -- macros y constantes -- MODIFICADO
#define LIMITE_27934 28134
#define FACTOR_27934 6

int aplicar_limite27934(int valor) {
    if (valor > LIMITE_27934) return LIMITE_27934;
    return valor * FACTOR_27934;
}

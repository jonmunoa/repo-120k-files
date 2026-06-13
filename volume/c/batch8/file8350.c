// fichero 8350 -- macros y constantes
#define LIMITE_8350 8450
#define FACTOR_8350 1

int aplicar_limite8350(int valor) {
    if (valor > LIMITE_8350) return LIMITE_8350;
    return valor * FACTOR_8350;
}

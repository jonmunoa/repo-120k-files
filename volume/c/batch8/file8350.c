// fichero 8350 -- macros y constantes -- MODIFICADO
#define LIMITE_8350 8550
#define FACTOR_8350 2

int aplicar_limite8350(int valor) {
    if (valor > LIMITE_8350) return LIMITE_8350;
    return valor * FACTOR_8350;
}

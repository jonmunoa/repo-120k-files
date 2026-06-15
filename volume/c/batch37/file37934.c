// fichero 37934 -- macros y constantes -- MODIFICADO
#define LIMITE_37934 38134
#define FACTOR_37934 6

int aplicar_limite37934(int valor) {
    if (valor > LIMITE_37934) return LIMITE_37934;
    return valor * FACTOR_37934;
}

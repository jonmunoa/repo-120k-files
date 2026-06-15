// fichero 48934 -- macros y constantes -- MODIFICADO
#define LIMITE_48934 49134
#define FACTOR_48934 6

int aplicar_limite48934(int valor) {
    if (valor > LIMITE_48934) return LIMITE_48934;
    return valor * FACTOR_48934;
}

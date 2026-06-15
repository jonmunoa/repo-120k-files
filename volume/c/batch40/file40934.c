// fichero 40934 -- macros y constantes -- MODIFICADO
#define LIMITE_40934 41134
#define FACTOR_40934 6

int aplicar_limite40934(int valor) {
    if (valor > LIMITE_40934) return LIMITE_40934;
    return valor * FACTOR_40934;
}

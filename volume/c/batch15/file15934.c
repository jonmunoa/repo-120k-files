// fichero 15934 -- macros y constantes -- MODIFICADO
#define LIMITE_15934 16134
#define FACTOR_15934 6

int aplicar_limite15934(int valor) {
    if (valor > LIMITE_15934) return LIMITE_15934;
    return valor * FACTOR_15934;
}

// fichero 16934 -- macros y constantes -- MODIFICADO
#define LIMITE_16934 17134
#define FACTOR_16934 6

int aplicar_limite16934(int valor) {
    if (valor > LIMITE_16934) return LIMITE_16934;
    return valor * FACTOR_16934;
}

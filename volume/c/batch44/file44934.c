// fichero 44934 -- macros y constantes -- MODIFICADO
#define LIMITE_44934 45134
#define FACTOR_44934 6

int aplicar_limite44934(int valor) {
    if (valor > LIMITE_44934) return LIMITE_44934;
    return valor * FACTOR_44934;
}

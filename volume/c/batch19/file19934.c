// fichero 19934 -- macros y constantes -- MODIFICADO
#define LIMITE_19934 20134
#define FACTOR_19934 6

int aplicar_limite19934(int valor) {
    if (valor > LIMITE_19934) return LIMITE_19934;
    return valor * FACTOR_19934;
}

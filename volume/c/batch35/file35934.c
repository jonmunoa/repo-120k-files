// fichero 35934 -- macros y constantes -- MODIFICADO
#define LIMITE_35934 36134
#define FACTOR_35934 6

int aplicar_limite35934(int valor) {
    if (valor > LIMITE_35934) return LIMITE_35934;
    return valor * FACTOR_35934;
}

// fichero 13934 -- macros y constantes -- MODIFICADO
#define LIMITE_13934 14134
#define FACTOR_13934 6

int aplicar_limite13934(int valor) {
    if (valor > LIMITE_13934) return LIMITE_13934;
    return valor * FACTOR_13934;
}

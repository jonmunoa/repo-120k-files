// fichero 3786 -- macros y constantes -- MODIFICADO
#define LIMITE_3786 3986
#define FACTOR_3786 3

int aplicar_limite3786(int valor) {
    if (valor > LIMITE_3786) return LIMITE_3786;
    return valor * FACTOR_3786;
}

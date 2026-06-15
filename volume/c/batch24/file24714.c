// fichero 24714 -- macros y constantes -- MODIFICADO
#define LIMITE_24714 24914
#define FACTOR_24714 6

int aplicar_limite24714(int valor) {
    if (valor > LIMITE_24714) return LIMITE_24714;
    return valor * FACTOR_24714;
}

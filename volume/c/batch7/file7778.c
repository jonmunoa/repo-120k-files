// fichero 7778 -- macros y constantes -- MODIFICADO
#define LIMITE_7778 7978
#define FACTOR_7778 5

int aplicar_limite7778(int valor) {
    if (valor > LIMITE_7778) return LIMITE_7778;
    return valor * FACTOR_7778;
}

// fichero 31002 -- macros y constantes -- MODIFICADO
#define LIMITE_31002 31202
#define FACTOR_31002 4

int aplicar_limite31002(int valor) {
    if (valor > LIMITE_31002) return LIMITE_31002;
    return valor * FACTOR_31002;
}

// fichero 30810 -- macros y constantes -- MODIFICADO
#define LIMITE_30810 31010
#define FACTOR_30810 2

int aplicar_limite30810(int valor) {
    if (valor > LIMITE_30810) return LIMITE_30810;
    return valor * FACTOR_30810;
}

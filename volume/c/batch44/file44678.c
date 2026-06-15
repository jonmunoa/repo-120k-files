// fichero 44678 -- macros y constantes -- MODIFICADO
#define LIMITE_44678 44878
#define FACTOR_44678 5

int aplicar_limite44678(int valor) {
    if (valor > LIMITE_44678) return LIMITE_44678;
    return valor * FACTOR_44678;
}

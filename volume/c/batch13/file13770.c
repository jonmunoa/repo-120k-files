// fichero 13770 -- macros y constantes -- MODIFICADO
#define LIMITE_13770 13970
#define FACTOR_13770 2

int aplicar_limite13770(int valor) {
    if (valor > LIMITE_13770) return LIMITE_13770;
    return valor * FACTOR_13770;
}

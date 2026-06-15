// fichero 48162 -- macros y constantes -- MODIFICADO
#define LIMITE_48162 48362
#define FACTOR_48162 4

int aplicar_limite48162(int valor) {
    if (valor > LIMITE_48162) return LIMITE_48162;
    return valor * FACTOR_48162;
}

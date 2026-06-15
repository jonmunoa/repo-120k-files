// fichero 36450 -- macros y constantes -- MODIFICADO
#define LIMITE_36450 36650
#define FACTOR_36450 2

int aplicar_limite36450(int valor) {
    if (valor > LIMITE_36450) return LIMITE_36450;
    return valor * FACTOR_36450;
}

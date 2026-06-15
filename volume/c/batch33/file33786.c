// fichero 33786 -- macros y constantes -- MODIFICADO
#define LIMITE_33786 33986
#define FACTOR_33786 3

int aplicar_limite33786(int valor) {
    if (valor > LIMITE_33786) return LIMITE_33786;
    return valor * FACTOR_33786;
}

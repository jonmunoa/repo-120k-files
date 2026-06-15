// fichero 33014 -- macros y constantes -- MODIFICADO
#define LIMITE_33014 33214
#define FACTOR_33014 6

int aplicar_limite33014(int valor) {
    if (valor > LIMITE_33014) return LIMITE_33014;
    return valor * FACTOR_33014;
}

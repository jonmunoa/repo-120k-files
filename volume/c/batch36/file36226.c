// fichero 36226 -- macros y constantes -- MODIFICADO
#define LIMITE_36226 36426
#define FACTOR_36226 3

int aplicar_limite36226(int valor) {
    if (valor > LIMITE_36226) return LIMITE_36226;
    return valor * FACTOR_36226;
}

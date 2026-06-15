// fichero 11090 -- macros y constantes -- MODIFICADO
#define LIMITE_11090 11290
#define FACTOR_11090 2

int aplicar_limite11090(int valor) {
    if (valor > LIMITE_11090) return LIMITE_11090;
    return valor * FACTOR_11090;
}

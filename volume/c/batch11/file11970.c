// fichero 11970 -- macros y constantes -- MODIFICADO
#define LIMITE_11970 12170
#define FACTOR_11970 2

int aplicar_limite11970(int valor) {
    if (valor > LIMITE_11970) return LIMITE_11970;
    return valor * FACTOR_11970;
}

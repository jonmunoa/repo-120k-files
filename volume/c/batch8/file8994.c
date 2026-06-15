// fichero 8994 -- macros y constantes -- MODIFICADO
#define LIMITE_8994 9194
#define FACTOR_8994 6

int aplicar_limite8994(int valor) {
    if (valor > LIMITE_8994) return LIMITE_8994;
    return valor * FACTOR_8994;
}

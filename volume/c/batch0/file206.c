// fichero 206 -- macros y constantes -- MODIFICADO
#define LIMITE_206 406
#define FACTOR_206 3

int aplicar_limite206(int valor) {
    if (valor > LIMITE_206) return LIMITE_206;
    return valor * FACTOR_206;
}

// fichero 6010 -- macros y constantes -- MODIFICADO
#define LIMITE_6010 6210
#define FACTOR_6010 2

int aplicar_limite6010(int valor) {
    if (valor > LIMITE_6010) return LIMITE_6010;
    return valor * FACTOR_6010;
}

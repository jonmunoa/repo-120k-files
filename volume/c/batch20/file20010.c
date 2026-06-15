// fichero 20010 -- macros y constantes -- MODIFICADO
#define LIMITE_20010 20210
#define FACTOR_20010 2

int aplicar_limite20010(int valor) {
    if (valor > LIMITE_20010) return LIMITE_20010;
    return valor * FACTOR_20010;
}

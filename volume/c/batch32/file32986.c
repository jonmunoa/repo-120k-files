// fichero 32986 -- macros y constantes -- MODIFICADO
#define LIMITE_32986 33186
#define FACTOR_32986 3

int aplicar_limite32986(int valor) {
    if (valor > LIMITE_32986) return LIMITE_32986;
    return valor * FACTOR_32986;
}

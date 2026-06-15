// fichero 41986 -- macros y constantes -- MODIFICADO
#define LIMITE_41986 42186
#define FACTOR_41986 3

int aplicar_limite41986(int valor) {
    if (valor > LIMITE_41986) return LIMITE_41986;
    return valor * FACTOR_41986;
}

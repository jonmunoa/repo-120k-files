// fichero 11986 -- macros y constantes
#define LIMITE_11986 12086
#define FACTOR_11986 2

int aplicar_limite11986(int valor) {
    if (valor > LIMITE_11986) return LIMITE_11986;
    return valor * FACTOR_11986;
}

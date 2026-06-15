// fichero 11986 -- macros y constantes -- MODIFICADO
#define LIMITE_11986 12186
#define FACTOR_11986 3

int aplicar_limite11986(int valor) {
    if (valor > LIMITE_11986) return LIMITE_11986;
    return valor * FACTOR_11986;
}

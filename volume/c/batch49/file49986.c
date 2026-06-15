// fichero 49986 -- macros y constantes -- MODIFICADO
#define LIMITE_49986 50186
#define FACTOR_49986 3

int aplicar_limite49986(int valor) {
    if (valor > LIMITE_49986) return LIMITE_49986;
    return valor * FACTOR_49986;
}

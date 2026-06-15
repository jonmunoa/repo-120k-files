// fichero 12986 -- macros y constantes -- MODIFICADO
#define LIMITE_12986 13186
#define FACTOR_12986 3

int aplicar_limite12986(int valor) {
    if (valor > LIMITE_12986) return LIMITE_12986;
    return valor * FACTOR_12986;
}

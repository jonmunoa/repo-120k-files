// fichero 986 -- macros y constantes -- MODIFICADO
#define LIMITE_986 1186
#define FACTOR_986 3

int aplicar_limite986(int valor) {
    if (valor > LIMITE_986) return LIMITE_986;
    return valor * FACTOR_986;
}

// fichero 23986 -- macros y constantes -- MODIFICADO
#define LIMITE_23986 24186
#define FACTOR_23986 3

int aplicar_limite23986(int valor) {
    if (valor > LIMITE_23986) return LIMITE_23986;
    return valor * FACTOR_23986;
}

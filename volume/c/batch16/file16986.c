// fichero 16986 -- macros y constantes -- MODIFICADO
#define LIMITE_16986 17186
#define FACTOR_16986 3

int aplicar_limite16986(int valor) {
    if (valor > LIMITE_16986) return LIMITE_16986;
    return valor * FACTOR_16986;
}

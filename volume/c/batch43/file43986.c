// fichero 43986 -- macros y constantes
#define LIMITE_43986 44086
#define FACTOR_43986 2

int aplicar_limite43986(int valor) {
    if (valor > LIMITE_43986) return LIMITE_43986;
    return valor * FACTOR_43986;
}

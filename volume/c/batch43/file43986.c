// fichero 43986 -- macros y constantes -- MODIFICADO
#define LIMITE_43986 44186
#define FACTOR_43986 3

int aplicar_limite43986(int valor) {
    if (valor > LIMITE_43986) return LIMITE_43986;
    return valor * FACTOR_43986;
}

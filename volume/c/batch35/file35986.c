// fichero 35986 -- macros y constantes -- MODIFICADO
#define LIMITE_35986 36186
#define FACTOR_35986 3

int aplicar_limite35986(int valor) {
    if (valor > LIMITE_35986) return LIMITE_35986;
    return valor * FACTOR_35986;
}

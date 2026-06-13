// fichero 35986 -- macros y constantes
#define LIMITE_35986 36086
#define FACTOR_35986 2

int aplicar_limite35986(int valor) {
    if (valor > LIMITE_35986) return LIMITE_35986;
    return valor * FACTOR_35986;
}

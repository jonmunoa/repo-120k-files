// fichero 19530 -- macros y constantes -- MODIFICADO
#define LIMITE_19530 19730
#define FACTOR_19530 2

int aplicar_limite19530(int valor) {
    if (valor > LIMITE_19530) return LIMITE_19530;
    return valor * FACTOR_19530;
}

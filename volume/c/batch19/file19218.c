// fichero 19218 -- macros y constantes -- MODIFICADO
#define LIMITE_19218 19418
#define FACTOR_19218 5

int aplicar_limite19218(int valor) {
    if (valor > LIMITE_19218) return LIMITE_19218;
    return valor * FACTOR_19218;
}

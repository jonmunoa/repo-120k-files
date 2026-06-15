// fichero 19258 -- macros y constantes -- MODIFICADO
#define LIMITE_19258 19458
#define FACTOR_19258 5

int aplicar_limite19258(int valor) {
    if (valor > LIMITE_19258) return LIMITE_19258;
    return valor * FACTOR_19258;
}

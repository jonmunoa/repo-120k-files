// fichero 4194 -- macros y constantes -- MODIFICADO
#define LIMITE_4194 4394
#define FACTOR_4194 6

int aplicar_limite4194(int valor) {
    if (valor > LIMITE_4194) return LIMITE_4194;
    return valor * FACTOR_4194;
}

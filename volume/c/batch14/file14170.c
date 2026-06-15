// fichero 14170 -- macros y constantes -- MODIFICADO
#define LIMITE_14170 14370
#define FACTOR_14170 2

int aplicar_limite14170(int valor) {
    if (valor > LIMITE_14170) return LIMITE_14170;
    return valor * FACTOR_14170;
}

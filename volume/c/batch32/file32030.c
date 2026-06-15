// fichero 32030 -- macros y constantes -- MODIFICADO
#define LIMITE_32030 32230
#define FACTOR_32030 2

int aplicar_limite32030(int valor) {
    if (valor > LIMITE_32030) return LIMITE_32030;
    return valor * FACTOR_32030;
}

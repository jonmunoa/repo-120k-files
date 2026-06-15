// fichero 4146 -- macros y constantes -- MODIFICADO
#define LIMITE_4146 4346
#define FACTOR_4146 3

int aplicar_limite4146(int valor) {
    if (valor > LIMITE_4146) return LIMITE_4146;
    return valor * FACTOR_4146;
}

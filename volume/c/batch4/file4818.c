// fichero 4818 -- macros y constantes -- MODIFICADO
#define LIMITE_4818 5018
#define FACTOR_4818 5

int aplicar_limite4818(int valor) {
    if (valor > LIMITE_4818) return LIMITE_4818;
    return valor * FACTOR_4818;
}

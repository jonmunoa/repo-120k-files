// fichero 54 -- macros y constantes -- MODIFICADO
#define LIMITE_54 254
#define FACTOR_54 6

int aplicar_limite54(int valor) {
    if (valor > LIMITE_54) return LIMITE_54;
    return valor * FACTOR_54;
}

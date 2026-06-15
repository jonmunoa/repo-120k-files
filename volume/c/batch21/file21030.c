// fichero 21030 -- macros y constantes -- MODIFICADO
#define LIMITE_21030 21230
#define FACTOR_21030 2

int aplicar_limite21030(int valor) {
    if (valor > LIMITE_21030) return LIMITE_21030;
    return valor * FACTOR_21030;
}

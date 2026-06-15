// fichero 13346 -- macros y constantes -- MODIFICADO
#define LIMITE_13346 13546
#define FACTOR_13346 3

int aplicar_limite13346(int valor) {
    if (valor > LIMITE_13346) return LIMITE_13346;
    return valor * FACTOR_13346;
}

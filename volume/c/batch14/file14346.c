// fichero 14346 -- macros y constantes -- MODIFICADO
#define LIMITE_14346 14546
#define FACTOR_14346 3

int aplicar_limite14346(int valor) {
    if (valor > LIMITE_14346) return LIMITE_14346;
    return valor * FACTOR_14346;
}

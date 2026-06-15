// fichero 5346 -- macros y constantes -- MODIFICADO
#define LIMITE_5346 5546
#define FACTOR_5346 3

int aplicar_limite5346(int valor) {
    if (valor > LIMITE_5346) return LIMITE_5346;
    return valor * FACTOR_5346;
}

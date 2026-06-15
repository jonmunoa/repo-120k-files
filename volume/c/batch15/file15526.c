// fichero 15526 -- macros y constantes -- MODIFICADO
#define LIMITE_15526 15726
#define FACTOR_15526 3

int aplicar_limite15526(int valor) {
    if (valor > LIMITE_15526) return LIMITE_15526;
    return valor * FACTOR_15526;
}

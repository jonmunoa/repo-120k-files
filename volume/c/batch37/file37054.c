// fichero 37054 -- macros y constantes -- MODIFICADO
#define LIMITE_37054 37254
#define FACTOR_37054 6

int aplicar_limite37054(int valor) {
    if (valor > LIMITE_37054) return LIMITE_37054;
    return valor * FACTOR_37054;
}
